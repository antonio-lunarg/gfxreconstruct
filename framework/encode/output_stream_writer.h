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

#ifndef GFXRECON_ENCODE_OUTPUT_STREAM_WRITER_H
#define GFXRECON_ENCODE_OUTPUT_STREAM_WRITER_H

#include "util/defines.h"
#include "util/compressor.h"
#include "util/thread_data.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

/**
 * @brief Common class with utilities to write to an output stream.
 */
class OutputStreamWriter
{
  public:
    OutputStreamWriter()                                         = default;
    OutputStreamWriter(const OutputStreamWriter&)                = delete;
    OutputStreamWriter(OutputStreamWriter&&)                     = delete;
    OutputStreamWriter& operator=(const OutputStreamWriter&)     = delete;
    OutputStreamWriter& operator=(OutputStreamWriter&&) noexcept = delete;
    virtual ~OutputStreamWriter()                                = default;

    virtual util::ThreadData* GetThreadData()                                  = 0;
    virtual bool              OutputStreamWrite(const void* data, size_t size) = 0;

    template <size_t N>
    bool OutputStreamCombineAndWrite(const std::pair<const void*, size_t> (&buffers)[N])
    {
        static_assert(N != 1, "Use OutputStreamWrite(void*, size) when writing a single buffer.");

        // Combine buffers for a single write.
        std::vector<uint8_t>& scratch_buffer = GetThreadData()->GetScratchBuffer();
        scratch_buffer.clear();
        for (size_t i = 0; i < N; ++i)
        {
            const uint8_t* const data = reinterpret_cast<const uint8_t*>(buffers[i].first);
            const size_t         size = buffers[i].second;
            scratch_buffer.insert(scratch_buffer.end(), data, data + size);
        }

        return OutputStreamWrite(scratch_buffer.data(), scratch_buffer.size());
    }
};

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_ENCODE_OUTPUT_STREAM_WRITER_H
