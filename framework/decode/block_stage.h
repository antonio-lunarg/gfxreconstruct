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

#ifndef GFXRECON_DECODE_BLOCK_STAGE_H
#define GFXRECON_DECODE_BLOCK_STAGE_H

#include "decode/parsed_block.h"
#include "decode/block_state.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

/// Receiver of ParsedBlocks in a block-stage pipeline.
/// The terminal sink dispatches to decoders.
/// Every stage is also a sink for the stage before it.
///
/// The callee may read `block` only for the duration of the Emit call.
/// To retain a block past the call it must be cloned into callee-owned storage.
/// In immediate mode the referenced block is recycled when the next block is parsed.
class BlockSink
{
  public:
    virtual ~BlockSink() = default;

    /// Emits one block downstream. Returns `kContinue` to keep the stream flowing.
    virtual ProcessBlockState Emit(ParsedBlock& block) = 0;
};

/// A stage receives one block and may emit zero (suppress), one (forward or replace),
/// or many (expand) blocks to its downstream sink.
/// Stages compose by being each other's downstream. On a non-`kContinue`
/// downstream result a stage must stop emitting and return that result.
class BlockStage : public BlockSink
{
  public:
    void SetDownstream(BlockSink* sink) { downstream_ = sink; }

    /// Default implementation: forward. Overrides may emit 0..N blocks.
    ProcessBlockState Emit(ParsedBlock& block) override { return downstream_->Emit(block); }

    /// Called at frame boundary / end of stream so buffering stages can drain.
    virtual ProcessBlockState Flush()
    {
        return downstream_ ? ProcessBlockState::kContinue : ProcessBlockState::kEndProcessing;
    }

  protected:
    BlockSink* downstream_{ nullptr };
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_DECODE_BLOCK_STAGE_H
