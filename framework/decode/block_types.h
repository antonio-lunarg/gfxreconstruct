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

#ifndef GFXRECON_DECODE_BLOCK_TYPES_H
#define GFXRECON_DECODE_BLOCK_TYPES_H

#include "util/defines.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

/// Block processing specific status.
/// Negative values indicate terminal states. Do not process blocks again after receiving these.
enum class ProcessBlockState : int32_t
{
    /// Encountered a frame boundary.
    kFrameBoundary = 1,

    /// Never returned by ProcessBlocks. Denotes placeholder/noop ProcessBlocksResult.
    kContinue = 0,

    /// Completed processing (!ContinueDecoding or clean EOF).
    kEndProcessing = -1,

    /// Encountered an error.
    kError = -2,
};

enum BlockIOError : int32_t
{
    kEndOfFile                         = 1, // when block reading is EOF at a block boundary
    kErrorNone                         = 0,
    kErrorInvalidFileDescriptor        = -1,
    kErrorOpeningFile                  = -2,
    kErrorReadingFile                  = -3, // ferror() return true at start of file
    kErrorReadingFileHeader            = -4,
    kErrorReadingBlockHeader           = -5,
    kErrorReadingCompressedBlockHeader = -6,
    kErrorReadingBlockData             = -7,
    kErrorReadingCompressedBlockData   = -8,
    kErrorInvalidFourCC                = -9,
    kErrorUnsupportedCompressionType   = -10,
    kErrorSeekingFile                  = -11, // Additional error types from FileTransformer
    kErrorWritingFile                  = -12,
    kErrorWritingFileHeader            = -13,
    kErrorWritingBlockHeader           = -14,
    kErrorWritingCompressedBlockHeader = -15,
    kErrorWritingBlockData             = -16,
    kErrorWritingCompressedBlockData   = -17,
    kErrorCopyingBlockData             = -18,
    kErrorUnsupportedBlockType         = -19

};

struct ProcessBlocksResult
{
    // NOTE: This is the frame_number of the *next* frame
    // Snapshot of process_frame_number_ at return.
    uint64_t frame_number{ 0U };

    // Snapshot of the process_error_state_ at return.
    BlockIOError error{ BlockIOError::kErrorNone };

    // ProcessBlocks return value.
    ProcessBlockState state{ ProcessBlockState::kContinue };
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_DECODE_BLOCK_TYPES_H
