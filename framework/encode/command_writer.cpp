/*
 ** Copyright (c) 2025 LunarG, Inc.
 **
 ** Permission is hereby granted, free of charge, to any person obtaining a
 ** copy of this software and associated documentation files (the "Software"),
 ** to deal in the Software without restriction, including without limitation
 ** the rights to use, copy, modify, merge, publish, distribute, sublicense,
 ** and/or sell copies of the Software, and to permit persons to whom the
 ** Software is furnished to do so, subject to the following conditions:
 **
 ** The above copyright notice and this permission notice shall be included in
 ** all copies or substantial portions of the Software.
 **
 ** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 ** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 ** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 ** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 ** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 ** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 ** DEALINGS IN THE SOFTWARE.
 */

#include "encode/command_writer.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

CommandWriter::CommandWriter(OutputStreamWriter* p_output_stream_writer, util::Compressor* p_compressor) :
    output_stream_writer_(p_output_stream_writer), compressor_(p_compressor)
{}

void CommandWriter::WriteInitBufferCmd(format::ApiFamilyId p_api_family,
                                       format::HandleId    p_device_id,
                                       format::HandleId    p_buffer_id,
                                       uint64_t            p_offset,
                                       uint64_t            p_size,
                                       const void*         p_data)
{
    GFXRECON_CHECK_CONVERSION_DATA_LOSS(size_t, p_size);

    format::InitBufferCommandHeader init_cmd = {};

    size_t         header_size       = sizeof(format::InitBufferCommandHeader);
    const uint8_t* uncompressed_data = static_cast<const uint8_t*>(p_data) + p_offset;
    size_t         uncompressed_size = static_cast<size_t>(p_size);

    auto* thread_data = output_stream_writer_->GetThreadData();
    GFXRECON_ASSERT(thread_data != nullptr);

    init_cmd.meta_header.block_header.type = format::BlockType::kMetaDataBlock;
    init_cmd.meta_header.meta_data_id = format::MakeMetaDataId(p_api_family, format::MetaDataType::kInitBufferCommand);
    init_cmd.thread_id                = thread_data->thread_id_;
    init_cmd.device_id                = p_device_id;
    init_cmd.buffer_id                = p_buffer_id;
    init_cmd.data_size                = p_size;

    bool compressed = false;

    if (compressor_ != nullptr)
    {
        std::vector<uint8_t>& compressed_buffer = thread_data->compressed_buffer_;

        size_t compressed_size =
            compressor_->Compress(uncompressed_size, uncompressed_data, &compressed_buffer, header_size);

        if ((compressed_size > 0) && (compressed_size < uncompressed_size))
        {
            compressed = true;

            // We don't have a special header for compressed fill commands because the header always includes
            // the uncompressed size, so we just change the type to indicate the data is compressed.
            init_cmd.meta_header.block_header.type = format::BlockType::kCompressedMetaDataBlock;

            // Calculate size of packet with uncompressed data size.
            init_cmd.meta_header.block_header.size = format::GetMetaDataBlockBaseSize(init_cmd) + compressed_size;

            // Copy header to beginning of compressed_buffer.
            util::platform::MemoryCopy(compressed_buffer.data(), header_size, &init_cmd, header_size);

            output_stream_writer_->OutputStreamWrite(compressed_buffer.data(), header_size + compressed_size);
        }
    }

    if (!compressed)
    {
        // Calculate size of packet with uncompressed data size.
        init_cmd.meta_header.block_header.size = format::GetMetaDataBlockBaseSize(init_cmd) + uncompressed_size;

        output_stream_writer_->OutputStreamCombineAndWrite(
            { { &init_cmd, header_size }, { uncompressed_data, uncompressed_size } });
    }
}

void CommandWriter::WriteInitImageCmd(format::ApiFamilyId          p_api_family,
                                      format::HandleId             p_device_id,
                                      format::HandleId             p_image_id,
                                      uint32_t                     p_aspect,
                                      uint32_t                     p_layout,
                                      uint32_t                     p_mip_levels,
                                      const std::vector<uint64_t>& p_level_sizes,
                                      uint64_t                     p_size,
                                      const void*                  p_data)
{

    format::InitImageCommandHeader upload_cmd;

    auto* thread_data = output_stream_writer_->GetThreadData();
    GFXRECON_ASSERT(thread_data != nullptr);

    // Packet size without the resource data.
    upload_cmd.meta_header.block_header.size = format::GetMetaDataBlockBaseSize(upload_cmd);
    upload_cmd.meta_header.block_header.type = format::kMetaDataBlock;
    upload_cmd.meta_header.meta_data_id = format::MakeMetaDataId(p_api_family, format::MetaDataType::kInitImageCommand);
    upload_cmd.thread_id                = thread_data->thread_id_;
    upload_cmd.device_id                = p_device_id;
    upload_cmd.image_id                 = p_image_id;
    upload_cmd.aspect                   = p_aspect;
    upload_cmd.layout                   = p_layout;

    auto* bytes = reinterpret_cast<const uint8_t*>(p_data);

    if (bytes != nullptr)
    {
        GFXRECON_CHECK_CONVERSION_DATA_LOSS(size_t, p_size);
        size_t data_size = static_cast<size_t>(p_size);
        // Store uncompressed data size in packet.
        upload_cmd.data_size = data_size;

        GFXRECON_ASSERT(p_mip_levels > 0);
        upload_cmd.level_count = p_mip_levels;

        if (compressor_ != nullptr)
        {
            std::vector<uint8_t>& compressed_buffer = thread_data->compressed_buffer_;
            size_t                compressed_size   = compressor_->Compress(data_size, bytes, &compressed_buffer, 0);

            if ((compressed_size > 0) && (compressed_size < data_size))
            {
                upload_cmd.meta_header.block_header.type = format::BlockType::kCompressedMetaDataBlock;

                bytes     = compressed_buffer.data();
                data_size = compressed_size;
            }
        }

        // Calculate size of packet with compressed or uncompressed data size.
        size_t levels_size = p_level_sizes.size() * sizeof(p_level_sizes[0]);

        upload_cmd.meta_header.block_header.size += levels_size + data_size;

        output_stream_writer_->OutputStreamWrite(&upload_cmd, sizeof(upload_cmd));
        output_stream_writer_->OutputStreamWrite(p_level_sizes.data(), levels_size);
        output_stream_writer_->OutputStreamWrite(bytes, data_size);
    }
    else
    {
        // Write a packet without resource data; replay must still perform a layout transition at image
        // initialization.
        upload_cmd.data_size   = 0;
        upload_cmd.level_count = 0;

        output_stream_writer_->OutputStreamWrite(&upload_cmd, sizeof(upload_cmd));
    }
}

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)
