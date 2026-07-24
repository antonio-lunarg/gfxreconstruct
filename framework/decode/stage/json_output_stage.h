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

#include "decode/block_stage.h"
#include "decode/block_types.h"
#include "decode/file_processor_visitors.h"
#include "decode/json_writer.h"
#include "decode/marker_json_consumer.h"
#include "decode/metadata_json_consumer.h"
#include "generated/generated_vulkan_decoder.h"
#include "generated/generated_vulkan_json_consumer.h"
#include "util/file_output_stream.h"

#ifndef GFXRECON_DECODE_JSON_OUTPUT_STAGE_H
#define GFXRECON_DECODE_JSON_OUTPUT_STAGE_H

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

struct StageDispatchVisitor
{
    ApiDecoder& decoder;
    JsonWriter& writer;
    uint64_t    block_index;

    void operator()(const std::monostate&) {}
    void operator()(const ProcessBlocksResult*) {}
    void operator()(const AnnotationArgs* annotation)
    {
        // JsonWriter is itself an AnnotationHandler
        auto annotation_call = [this](auto&&... expanded_args) {
            writer.ProcessAnnotation(std::forward<decltype(expanded_args)>(expanded_args)...);
        };
        std::apply(annotation_call, annotation->GetTuple());
    }

    template <typename Args>
    void operator()(const Args* args)
    {
        if (file_processor::DecoderSupportsDispatch(decoder, *args))
        {
            [[maybe_unused]] file_processor::DecoderAllocGuard<DispatchTraits<Args>::kHasAllocGuard> alloc_guard{};
            file_processor::SetDecoderApiCallId(decoder, *args);
            decoder.SetCurrentBlockIndex(block_index);

            constexpr auto decode_method = DispatchTraits<Args>::kDecoderMethod;
            auto           dispatch_call = [this](auto&&... expanded_args) {
                (decoder.*decode_method)(std::forward<decltype(expanded_args)>(expanded_args)...);
            };
            std::apply(dispatch_call, args->GetTuple());
        }
    }
};

class JsonOutputStage : public BlockStage
{
  public:
    JsonOutputStage(const std::string& output_path, const std::string& input_filename, const std::string& gfxr_version);
    ~JsonOutputStage() override;

    virtual ProcessBlockState Emit(ParsedBlock& block) override;

  private:
    using JsonConsumer = MetadataJsonConsumer<MarkerJsonConsumer<VulkanExportJsonConsumer>>;

    util::FileOutputStream out_stream_;
    VulkanDecoder          decoder_;
    JsonConsumer           consumer_;
    JsonWriter             writer_;
    StageDispatchVisitor   visitor_;
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_DECODE_JSON_OUTPUT_STAGE_H
