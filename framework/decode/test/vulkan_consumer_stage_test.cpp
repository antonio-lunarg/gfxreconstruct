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

#include <catch2/catch.hpp>

#include "decode/vulkan_consumer_stage_base.h"
#include "generated/generated_vulkan_consumer_stage.h"

using namespace gfxrecon::decode;

TEST_CASE("simple consumer stage test", "[stage]")
{
    class RecordingConsumer : public VulkanConsumer
    {
      public:
        void Process_vkCmdDraw(const ApiCallInfo& call_info, args::CmdDraw& args) override { calls.push_back(args); }

        std::vector<args::CmdDraw> calls;
    };

    SECTION("Forward")
    {
        class ForwardingStage : public VulkanConsumerStageBase
        {
          public:
            void Process_vkCmdDraw(const ApiCallInfo& call_info, args::CmdDraw& args) override
            {
                for (auto next : GetNext())
                {
                    next->Process_vkCmdDraw(call_info, args);
                }
            }
        };

        auto stage              = ForwardingStage();
        auto recording_consumer = RecordingConsumer();
        stage.AddNext(&recording_consumer);

        auto cmd_draw = args::CmdDraw();

        stage.Process_vkCmdDraw(ApiCallInfo(), cmd_draw);

        REQUIRE(recording_consumer.calls.size() == 1);
    }

    SECTION("Suppress")
    {
        class SuppressStage : public VulkanConsumerStageBase
        {
          public:
            void Process_vkCmdDraw(const ApiCallInfo& call_info, args::CmdDraw& args) override { suppressed++; }

            uint32_t suppressed = 0;
        };

        auto suppress_stage = SuppressStage();

        auto recording_consumer = RecordingConsumer();
        suppress_stage.AddNext(&recording_consumer);

        auto cmd_draw = args::CmdDraw();
        suppress_stage.Process_vkCmdDraw(ApiCallInfo(), cmd_draw);

        REQUIRE(suppress_stage.suppressed == 1);
        REQUIRE(recording_consumer.calls.size() == 0);
    }

    SECTION("Edit")
    {
        class EditStage : public VulkanConsumerStageBase
        {
          public:
            void Process_vkCmdDraw(const ApiCallInfo& call_info, args::CmdDraw& args) override
            {
                args.vertexCount = 42;
                for (auto next : GetNext())
                {
                    next->Process_vkCmdDraw(call_info, args);
                }
            }
        };
        auto edit_stage = EditStage();

        auto recording_consumer = RecordingConsumer();
        edit_stage.AddNext(&recording_consumer);

        auto cmd_draw = args::CmdDraw();
        edit_stage.Process_vkCmdDraw(ApiCallInfo(), cmd_draw);

        REQUIRE(recording_consumer.calls.size() == 1);
        REQUIRE(recording_consumer.calls[0].vertexCount == 42);
    }

    SECTION("Expand")
    {
        class ExpandStage : public VulkanConsumerStageBase
        {
          public:
            void Process_vkCmdDraw(const ApiCallInfo& call_info, args::CmdDraw& args) override
            {
                for (auto next : GetNext())
                {
                    next->Process_vkCmdDraw(call_info, args);
                    next->Process_vkCmdDraw(call_info, args);
                }
            }
        };
        auto expand_stage = ExpandStage();

        auto recording_consumer = RecordingConsumer();
        expand_stage.AddNext(&recording_consumer);

        auto cmd_draw = args::CmdDraw();
        expand_stage.Process_vkCmdDraw(ApiCallInfo(), cmd_draw);

        REQUIRE(recording_consumer.calls.size() == 2);
    }

    SECTION("Template forwarding")
    {
        auto stage              = VulkanConsumerStage();
        auto recording_consumer = RecordingConsumer();
        stage.AddNext(&recording_consumer);

        auto cmd_draw = args::CmdDraw();

        stage.Process_vkCmdDraw(ApiCallInfo(), cmd_draw);

        REQUIRE(recording_consumer.calls.size() == 1);
    }

    SECTION("Forward through Emit covers hand-declared commands")
    {
        class TemplateForwardingStage : public VulkanConsumerStage
        {
          public:
            void Process_vkUpdateDescriptorSetWithTemplate(const ApiCallInfo&                     call_info,
                                                           args::UpdateDescriptorSetWithTemplate& args) override
            {
                Emit(call_info, args);
            }
        };
    }
}
