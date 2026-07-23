#include "decode/block_stage_pipeline.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

void BlockStagePipeline::AddStage(std::unique_ptr<BlockStage> stage)
{
    if (!stages_.empty())
    {
        stages_.back()->SetDownstream(stage.get());
    }
    stages_.push_back(std::move(stage));
}

ProcessBlockState BlockStagePipeline::ProcessBlock(ParsedBlock& block)
{
    GFXRECON_ASSERT(!stages_.empty());
    return stages_.front()->Emit(block);
}

ProcessBlockState BlockStagePipeline::Flush()
{
    if (stages_.empty())
    {
        return ProcessBlockState::kContinue;
    }

    ProcessBlockState state = ProcessBlockState::kContinue;
    for (auto& stage : stages_)
    {
        state = stage->Flush();
        if (state != ProcessBlockState::kContinue)
        {
            break;
        }
    }
    return state;
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)