/*
** Copyright (c) 2026 LunarG, Inc.
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

#include "decode/stage/json_output_stage.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

constexpr size_t kBufferSize = 64 * 1024; // 64 KB

JsonOutputStage::JsonOutputStage(const std::string& output_path,
                                 const std::string& input_filename,
                                 const std::string& gfxr_version) :
    out_stream_(output_path, kBufferSize),
    writer_(gfxr_version, input_filename), visitor_{ decoder_, writer_, 0 }
{
    decoder_.AddConsumer(&consumer_);
    consumer_.Initialize(&writer_);
    writer_.StartStream(&out_stream_);
}

JsonOutputStage::~JsonOutputStage()
{
    writer_.EndStream();
}

ProcessBlockState JsonOutputStage::Emit(ParsedBlock& block)
{
    // In order to do something with the block, we can create a visitor.
    visitor_.block_index = block.GetBlockIndex();
    std::visit(visitor_, block.GetArgs());

    return BlockStage::Emit(block);
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
