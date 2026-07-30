/*
** Copyright (c) 2018-2023 Valve Corporation
** Copyright (c) 2018-2026 LunarG, Inc.
** Copyright (c) 2023 Advanced Micro Devices, Inc.
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

/*
** This file is generated from the Khronos Vulkan XML API Registry.
**
*/

#ifndef  GFXRECON_GENERATED_VULKAN_CONSUMER_STAGE_H
#define  GFXRECON_GENERATED_VULKAN_CONSUMER_STAGE_H

#include "decode/vulkan_consumer_stage_base.h"
#include "util/defines.h"
#include "generated/generated_vulkan_decoder_args.h"
#include "decode/vulkan_decoder_args.h"

#include "vulkan/vulkan.h"
#include "vk_video/vulkan_video_codec_h264std.h"
#include "vk_video/vulkan_video_codec_h264std_decode.h"
#include "vk_video/vulkan_video_codec_h264std_encode.h"
#include "vk_video/vulkan_video_codec_h265std.h"
#include "vk_video/vulkan_video_codec_h265std_decode.h"
#include "vk_video/vulkan_video_codec_h265std_encode.h"
#include "vk_video/vulkan_video_codecs_common.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)
class VulkanConsumerStage : public VulkanConsumerStageBase
{
  public:
    VulkanConsumerStage() { }

    virtual ~VulkanConsumerStage() override { }

    // Reimport `Process` to make sure name lookup works for hand-declared Process_vk* functions.
    using VulkanConsumerBase::Process;

    void Process_vkCreateInstance(
        const ApiCallInfo&                          call_info,
        args::CreateInstance&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyInstance(
        const ApiCallInfo&                          call_info,
        args::DestroyInstance&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkEnumeratePhysicalDevices(
        const ApiCallInfo&                          call_info,
        args::EnumeratePhysicalDevices&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceFeatures(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceFeatures&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceFormatProperties(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceFormatProperties&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceImageFormatProperties(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceImageFormatProperties& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceProperties(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceProperties&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceQueueFamilyProperties(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceQueueFamilyProperties& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceMemoryProperties(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceMemoryProperties&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateDevice(
        const ApiCallInfo&                          call_info,
        args::CreateDevice&                         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyDevice(
        const ApiCallInfo&                          call_info,
        args::DestroyDevice&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceQueue(
        const ApiCallInfo&                          call_info,
        args::GetDeviceQueue&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkQueueSubmit(
        const ApiCallInfo&                          call_info,
        args::QueueSubmit&                          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkQueueWaitIdle(
        const ApiCallInfo&                          call_info,
        args::QueueWaitIdle&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDeviceWaitIdle(
        const ApiCallInfo&                          call_info,
        args::DeviceWaitIdle&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkAllocateMemory(
        const ApiCallInfo&                          call_info,
        args::AllocateMemory&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkFreeMemory(
        const ApiCallInfo&                          call_info,
        args::FreeMemory&                           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkMapMemory(
        const ApiCallInfo&                          call_info,
        args::MapMemory&                            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkUnmapMemory(
        const ApiCallInfo&                          call_info,
        args::UnmapMemory&                          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkFlushMappedMemoryRanges(
        const ApiCallInfo&                          call_info,
        args::FlushMappedMemoryRanges&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkInvalidateMappedMemoryRanges(
        const ApiCallInfo&                          call_info,
        args::InvalidateMappedMemoryRanges&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceMemoryCommitment(
        const ApiCallInfo&                          call_info,
        args::GetDeviceMemoryCommitment&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkBindBufferMemory(
        const ApiCallInfo&                          call_info,
        args::BindBufferMemory&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkBindImageMemory(
        const ApiCallInfo&                          call_info,
        args::BindImageMemory&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetBufferMemoryRequirements(
        const ApiCallInfo&                          call_info,
        args::GetBufferMemoryRequirements&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageMemoryRequirements(
        const ApiCallInfo&                          call_info,
        args::GetImageMemoryRequirements&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageSparseMemoryRequirements(
        const ApiCallInfo&                          call_info,
        args::GetImageSparseMemoryRequirements&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceSparseImageFormatProperties(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceSparseImageFormatProperties& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkQueueBindSparse(
        const ApiCallInfo&                          call_info,
        args::QueueBindSparse&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateFence(
        const ApiCallInfo&                          call_info,
        args::CreateFence&                          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyFence(
        const ApiCallInfo&                          call_info,
        args::DestroyFence&                         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkResetFences(
        const ApiCallInfo&                          call_info,
        args::ResetFences&                          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetFenceStatus(
        const ApiCallInfo&                          call_info,
        args::GetFenceStatus&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkWaitForFences(
        const ApiCallInfo&                          call_info,
        args::WaitForFences&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateSemaphore(
        const ApiCallInfo&                          call_info,
        args::CreateSemaphore&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroySemaphore(
        const ApiCallInfo&                          call_info,
        args::DestroySemaphore&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateQueryPool(
        const ApiCallInfo&                          call_info,
        args::CreateQueryPool&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyQueryPool(
        const ApiCallInfo&                          call_info,
        args::DestroyQueryPool&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetQueryPoolResults(
        const ApiCallInfo&                          call_info,
        args::GetQueryPoolResults&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateBuffer(
        const ApiCallInfo&                          call_info,
        args::CreateBuffer&                         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyBuffer(
        const ApiCallInfo&                          call_info,
        args::DestroyBuffer&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateImage(
        const ApiCallInfo&                          call_info,
        args::CreateImage&                          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyImage(
        const ApiCallInfo&                          call_info,
        args::DestroyImage&                         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageSubresourceLayout(
        const ApiCallInfo&                          call_info,
        args::GetImageSubresourceLayout&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateImageView(
        const ApiCallInfo&                          call_info,
        args::CreateImageView&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyImageView(
        const ApiCallInfo&                          call_info,
        args::DestroyImageView&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateCommandPool(
        const ApiCallInfo&                          call_info,
        args::CreateCommandPool&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyCommandPool(
        const ApiCallInfo&                          call_info,
        args::DestroyCommandPool&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkResetCommandPool(
        const ApiCallInfo&                          call_info,
        args::ResetCommandPool&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkAllocateCommandBuffers(
        const ApiCallInfo&                          call_info,
        args::AllocateCommandBuffers&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkFreeCommandBuffers(
        const ApiCallInfo&                          call_info,
        args::FreeCommandBuffers&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkBeginCommandBuffer(
        const ApiCallInfo&                          call_info,
        args::BeginCommandBuffer&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkEndCommandBuffer(
        const ApiCallInfo&                          call_info,
        args::EndCommandBuffer&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkResetCommandBuffer(
        const ApiCallInfo&                          call_info,
        args::ResetCommandBuffer&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyBuffer(
        const ApiCallInfo&                          call_info,
        args::CmdCopyBuffer&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyImage(
        const ApiCallInfo&                          call_info,
        args::CmdCopyImage&                         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyBufferToImage(
        const ApiCallInfo&                          call_info,
        args::CmdCopyBufferToImage&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyImageToBuffer(
        const ApiCallInfo&                          call_info,
        args::CmdCopyImageToBuffer&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdUpdateBuffer(
        const ApiCallInfo&                          call_info,
        args::CmdUpdateBuffer&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdFillBuffer(
        const ApiCallInfo&                          call_info,
        args::CmdFillBuffer&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdPipelineBarrier(
        const ApiCallInfo&                          call_info,
        args::CmdPipelineBarrier&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginQuery(
        const ApiCallInfo&                          call_info,
        args::CmdBeginQuery&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndQuery(
        const ApiCallInfo&                          call_info,
        args::CmdEndQuery&                          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdResetQueryPool(
        const ApiCallInfo&                          call_info,
        args::CmdResetQueryPool&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdWriteTimestamp(
        const ApiCallInfo&                          call_info,
        args::CmdWriteTimestamp&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyQueryPoolResults(
        const ApiCallInfo&                          call_info,
        args::CmdCopyQueryPoolResults&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdExecuteCommands(
        const ApiCallInfo&                          call_info,
        args::CmdExecuteCommands&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateEvent(
        const ApiCallInfo&                          call_info,
        args::CreateEvent&                          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyEvent(
        const ApiCallInfo&                          call_info,
        args::DestroyEvent&                         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetEventStatus(
        const ApiCallInfo&                          call_info,
        args::GetEventStatus&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSetEvent(
        const ApiCallInfo&                          call_info,
        args::SetEvent&                             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkResetEvent(
        const ApiCallInfo&                          call_info,
        args::ResetEvent&                           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateBufferView(
        const ApiCallInfo&                          call_info,
        args::CreateBufferView&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyBufferView(
        const ApiCallInfo&                          call_info,
        args::DestroyBufferView&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateShaderModule(
        const ApiCallInfo&                          call_info,
        args::CreateShaderModule&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyShaderModule(
        const ApiCallInfo&                          call_info,
        args::DestroyShaderModule&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreatePipelineCache(
        const ApiCallInfo&                          call_info,
        args::CreatePipelineCache&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyPipelineCache(
        const ApiCallInfo&                          call_info,
        args::DestroyPipelineCache&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPipelineCacheData(
        const ApiCallInfo&                          call_info,
        args::GetPipelineCacheData&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkMergePipelineCaches(
        const ApiCallInfo&                          call_info,
        args::MergePipelineCaches&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateComputePipelines(
        const ApiCallInfo&                          call_info,
        args::CreateComputePipelines&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyPipeline(
        const ApiCallInfo&                          call_info,
        args::DestroyPipeline&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreatePipelineLayout(
        const ApiCallInfo&                          call_info,
        args::CreatePipelineLayout&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyPipelineLayout(
        const ApiCallInfo&                          call_info,
        args::DestroyPipelineLayout&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateSampler(
        const ApiCallInfo&                          call_info,
        args::CreateSampler&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroySampler(
        const ApiCallInfo&                          call_info,
        args::DestroySampler&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateDescriptorSetLayout(
        const ApiCallInfo&                          call_info,
        args::CreateDescriptorSetLayout&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyDescriptorSetLayout(
        const ApiCallInfo&                          call_info,
        args::DestroyDescriptorSetLayout&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateDescriptorPool(
        const ApiCallInfo&                          call_info,
        args::CreateDescriptorPool&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyDescriptorPool(
        const ApiCallInfo&                          call_info,
        args::DestroyDescriptorPool&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkResetDescriptorPool(
        const ApiCallInfo&                          call_info,
        args::ResetDescriptorPool&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkAllocateDescriptorSets(
        const ApiCallInfo&                          call_info,
        args::AllocateDescriptorSets&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkFreeDescriptorSets(
        const ApiCallInfo&                          call_info,
        args::FreeDescriptorSets&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkUpdateDescriptorSets(
        const ApiCallInfo&                          call_info,
        args::UpdateDescriptorSets&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindPipeline(
        const ApiCallInfo&                          call_info,
        args::CmdBindPipeline&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindDescriptorSets(
        const ApiCallInfo&                          call_info,
        args::CmdBindDescriptorSets&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdClearColorImage(
        const ApiCallInfo&                          call_info,
        args::CmdClearColorImage&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDispatch(
        const ApiCallInfo&                          call_info,
        args::CmdDispatch&                          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDispatchIndirect(
        const ApiCallInfo&                          call_info,
        args::CmdDispatchIndirect&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetEvent(
        const ApiCallInfo&                          call_info,
        args::CmdSetEvent&                          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdResetEvent(
        const ApiCallInfo&                          call_info,
        args::CmdResetEvent&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdWaitEvents(
        const ApiCallInfo&                          call_info,
        args::CmdWaitEvents&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdPushConstants(
        const ApiCallInfo&                          call_info,
        args::CmdPushConstants&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateGraphicsPipelines(
        const ApiCallInfo&                          call_info,
        args::CreateGraphicsPipelines&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateFramebuffer(
        const ApiCallInfo&                          call_info,
        args::CreateFramebuffer&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyFramebuffer(
        const ApiCallInfo&                          call_info,
        args::DestroyFramebuffer&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateRenderPass(
        const ApiCallInfo&                          call_info,
        args::CreateRenderPass&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyRenderPass(
        const ApiCallInfo&                          call_info,
        args::DestroyRenderPass&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetRenderAreaGranularity(
        const ApiCallInfo&                          call_info,
        args::GetRenderAreaGranularity&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetViewport(
        const ApiCallInfo&                          call_info,
        args::CmdSetViewport&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetScissor(
        const ApiCallInfo&                          call_info,
        args::CmdSetScissor&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetLineWidth(
        const ApiCallInfo&                          call_info,
        args::CmdSetLineWidth&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthBias(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthBias&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetBlendConstants(
        const ApiCallInfo&                          call_info,
        args::CmdSetBlendConstants&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthBounds(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthBounds&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetStencilCompareMask(
        const ApiCallInfo&                          call_info,
        args::CmdSetStencilCompareMask&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetStencilWriteMask(
        const ApiCallInfo&                          call_info,
        args::CmdSetStencilWriteMask&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetStencilReference(
        const ApiCallInfo&                          call_info,
        args::CmdSetStencilReference&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindIndexBuffer(
        const ApiCallInfo&                          call_info,
        args::CmdBindIndexBuffer&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindVertexBuffers(
        const ApiCallInfo&                          call_info,
        args::CmdBindVertexBuffers&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDraw(
        const ApiCallInfo&                          call_info,
        args::CmdDraw&                              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndexed(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndexed&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndirect(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndirect&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndexedIndirect(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndexedIndirect&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBlitImage(
        const ApiCallInfo&                          call_info,
        args::CmdBlitImage&                         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdClearDepthStencilImage(
        const ApiCallInfo&                          call_info,
        args::CmdClearDepthStencilImage&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdClearAttachments(
        const ApiCallInfo&                          call_info,
        args::CmdClearAttachments&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdResolveImage(
        const ApiCallInfo&                          call_info,
        args::CmdResolveImage&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginRenderPass(
        const ApiCallInfo&                          call_info,
        args::CmdBeginRenderPass&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdNextSubpass(
        const ApiCallInfo&                          call_info,
        args::CmdNextSubpass&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndRenderPass(
        const ApiCallInfo&                          call_info,
        args::CmdEndRenderPass&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkBindBufferMemory2(
        const ApiCallInfo&                          call_info,
        args::BindBufferMemory2&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkBindImageMemory2(
        const ApiCallInfo&                          call_info,
        args::BindImageMemory2&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceGroupPeerMemoryFeatures(
        const ApiCallInfo&                          call_info,
        args::GetDeviceGroupPeerMemoryFeatures&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDeviceMask(
        const ApiCallInfo&                          call_info,
        args::CmdSetDeviceMask&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkEnumeratePhysicalDeviceGroups(
        const ApiCallInfo&                          call_info,
        args::EnumeratePhysicalDeviceGroups&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageMemoryRequirements2(
        const ApiCallInfo&                          call_info,
        args::GetImageMemoryRequirements2&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetBufferMemoryRequirements2(
        const ApiCallInfo&                          call_info,
        args::GetBufferMemoryRequirements2&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageSparseMemoryRequirements2(
        const ApiCallInfo&                          call_info,
        args::GetImageSparseMemoryRequirements2&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceFeatures2(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceFeatures2&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceProperties2(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceProperties2&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceFormatProperties2(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceFormatProperties2&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceImageFormatProperties2(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceImageFormatProperties2& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceQueueFamilyProperties2(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceQueueFamilyProperties2& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceMemoryProperties2(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceMemoryProperties2&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceSparseImageFormatProperties2(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceSparseImageFormatProperties2& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkTrimCommandPool(
        const ApiCallInfo&                          call_info,
        args::TrimCommandPool&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceQueue2(
        const ApiCallInfo&                          call_info,
        args::GetDeviceQueue2&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceExternalBufferProperties(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceExternalBufferProperties& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceExternalFenceProperties(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceExternalFenceProperties& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceExternalSemaphoreProperties(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceExternalSemaphoreProperties& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDispatchBase(
        const ApiCallInfo&                          call_info,
        args::CmdDispatchBase&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateDescriptorUpdateTemplate(
        const ApiCallInfo&                          call_info,
        args::CreateDescriptorUpdateTemplate&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyDescriptorUpdateTemplate(
        const ApiCallInfo&                          call_info,
        args::DestroyDescriptorUpdateTemplate&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDescriptorSetLayoutSupport(
        const ApiCallInfo&                          call_info,
        args::GetDescriptorSetLayoutSupport&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateSamplerYcbcrConversion(
        const ApiCallInfo&                          call_info,
        args::CreateSamplerYcbcrConversion&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroySamplerYcbcrConversion(
        const ApiCallInfo&                          call_info,
        args::DestroySamplerYcbcrConversion&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkResetQueryPool(
        const ApiCallInfo&                          call_info,
        args::ResetQueryPool&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetSemaphoreCounterValue(
        const ApiCallInfo&                          call_info,
        args::GetSemaphoreCounterValue&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkWaitSemaphores(
        const ApiCallInfo&                          call_info,
        args::WaitSemaphores&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSignalSemaphore(
        const ApiCallInfo&                          call_info,
        args::SignalSemaphore&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetBufferDeviceAddress(
        const ApiCallInfo&                          call_info,
        args::GetBufferDeviceAddress&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetBufferOpaqueCaptureAddress(
        const ApiCallInfo&                          call_info,
        args::GetBufferOpaqueCaptureAddress&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceMemoryOpaqueCaptureAddress(
        const ApiCallInfo&                          call_info,
        args::GetDeviceMemoryOpaqueCaptureAddress&  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndirectCount(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndirectCount&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndexedIndirectCount(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndexedIndirectCount&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateRenderPass2(
        const ApiCallInfo&                          call_info,
        args::CreateRenderPass2&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginRenderPass2(
        const ApiCallInfo&                          call_info,
        args::CmdBeginRenderPass2&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdNextSubpass2(
        const ApiCallInfo&                          call_info,
        args::CmdNextSubpass2&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndRenderPass2(
        const ApiCallInfo&                          call_info,
        args::CmdEndRenderPass2&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceToolProperties(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceToolProperties&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreatePrivateDataSlot(
        const ApiCallInfo&                          call_info,
        args::CreatePrivateDataSlot&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyPrivateDataSlot(
        const ApiCallInfo&                          call_info,
        args::DestroyPrivateDataSlot&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSetPrivateData(
        const ApiCallInfo&                          call_info,
        args::SetPrivateData&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPrivateData(
        const ApiCallInfo&                          call_info,
        args::GetPrivateData&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdPipelineBarrier2(
        const ApiCallInfo&                          call_info,
        args::CmdPipelineBarrier2&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdWriteTimestamp2(
        const ApiCallInfo&                          call_info,
        args::CmdWriteTimestamp2&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkQueueSubmit2(
        const ApiCallInfo&                          call_info,
        args::QueueSubmit2&                         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyBuffer2(
        const ApiCallInfo&                          call_info,
        args::CmdCopyBuffer2&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyImage2(
        const ApiCallInfo&                          call_info,
        args::CmdCopyImage2&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyBufferToImage2(
        const ApiCallInfo&                          call_info,
        args::CmdCopyBufferToImage2&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyImageToBuffer2(
        const ApiCallInfo&                          call_info,
        args::CmdCopyImageToBuffer2&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceBufferMemoryRequirements(
        const ApiCallInfo&                          call_info,
        args::GetDeviceBufferMemoryRequirements&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceImageMemoryRequirements(
        const ApiCallInfo&                          call_info,
        args::GetDeviceImageMemoryRequirements&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceImageSparseMemoryRequirements(
        const ApiCallInfo&                          call_info,
        args::GetDeviceImageSparseMemoryRequirements& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetEvent2(
        const ApiCallInfo&                          call_info,
        args::CmdSetEvent2&                         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdResetEvent2(
        const ApiCallInfo&                          call_info,
        args::CmdResetEvent2&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdWaitEvents2(
        const ApiCallInfo&                          call_info,
        args::CmdWaitEvents2&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBlitImage2(
        const ApiCallInfo&                          call_info,
        args::CmdBlitImage2&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdResolveImage2(
        const ApiCallInfo&                          call_info,
        args::CmdResolveImage2&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginRendering(
        const ApiCallInfo&                          call_info,
        args::CmdBeginRendering&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndRendering(
        const ApiCallInfo&                          call_info,
        args::CmdEndRendering&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetCullMode(
        const ApiCallInfo&                          call_info,
        args::CmdSetCullMode&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetFrontFace(
        const ApiCallInfo&                          call_info,
        args::CmdSetFrontFace&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetPrimitiveTopology(
        const ApiCallInfo&                          call_info,
        args::CmdSetPrimitiveTopology&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetViewportWithCount(
        const ApiCallInfo&                          call_info,
        args::CmdSetViewportWithCount&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetScissorWithCount(
        const ApiCallInfo&                          call_info,
        args::CmdSetScissorWithCount&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindVertexBuffers2(
        const ApiCallInfo&                          call_info,
        args::CmdBindVertexBuffers2&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthTestEnable(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthTestEnable&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthWriteEnable(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthWriteEnable&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthCompareOp(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthCompareOp&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthBoundsTestEnable(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthBoundsTestEnable&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetStencilTestEnable(
        const ApiCallInfo&                          call_info,
        args::CmdSetStencilTestEnable&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetStencilOp(
        const ApiCallInfo&                          call_info,
        args::CmdSetStencilOp&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetRasterizerDiscardEnable(
        const ApiCallInfo&                          call_info,
        args::CmdSetRasterizerDiscardEnable&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthBiasEnable(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthBiasEnable&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetPrimitiveRestartEnable(
        const ApiCallInfo&                          call_info,
        args::CmdSetPrimitiveRestartEnable&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkMapMemory2(
        const ApiCallInfo&                          call_info,
        args::MapMemory2&                           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkUnmapMemory2(
        const ApiCallInfo&                          call_info,
        args::UnmapMemory2&                         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceImageSubresourceLayout(
        const ApiCallInfo&                          call_info,
        args::GetDeviceImageSubresourceLayout&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageSubresourceLayout2(
        const ApiCallInfo&                          call_info,
        args::GetImageSubresourceLayout2&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCopyMemoryToImage(
        const ApiCallInfo&                          call_info,
        args::CopyMemoryToImage&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCopyImageToMemory(
        const ApiCallInfo&                          call_info,
        args::CopyImageToMemory&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCopyImageToImage(
        const ApiCallInfo&                          call_info,
        args::CopyImageToImage&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkTransitionImageLayout(
        const ApiCallInfo&                          call_info,
        args::TransitionImageLayout&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdPushDescriptorSet(
        const ApiCallInfo&                          call_info,
        args::CmdPushDescriptorSet&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindDescriptorSets2(
        const ApiCallInfo&                          call_info,
        args::CmdBindDescriptorSets2&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdPushConstants2(
        const ApiCallInfo&                          call_info,
        args::CmdPushConstants2&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdPushDescriptorSet2(
        const ApiCallInfo&                          call_info,
        args::CmdPushDescriptorSet2&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetLineStipple(
        const ApiCallInfo&                          call_info,
        args::CmdSetLineStipple&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindIndexBuffer2(
        const ApiCallInfo&                          call_info,
        args::CmdBindIndexBuffer2&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetRenderingAreaGranularity(
        const ApiCallInfo&                          call_info,
        args::GetRenderingAreaGranularity&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetRenderingAttachmentLocations(
        const ApiCallInfo&                          call_info,
        args::CmdSetRenderingAttachmentLocations&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetRenderingInputAttachmentIndices(
        const ApiCallInfo&                          call_info,
        args::CmdSetRenderingInputAttachmentIndices& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroySurfaceKHR(
        const ApiCallInfo&                          call_info,
        args::DestroySurfaceKHR&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceSurfaceSupportKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceSurfaceSupportKHR&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceSurfaceCapabilitiesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceSurfaceFormatsKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceSurfaceFormatsKHR&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceSurfacePresentModesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceSurfacePresentModesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateSwapchainKHR(
        const ApiCallInfo&                          call_info,
        args::CreateSwapchainKHR&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroySwapchainKHR(
        const ApiCallInfo&                          call_info,
        args::DestroySwapchainKHR&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetSwapchainImagesKHR(
        const ApiCallInfo&                          call_info,
        args::GetSwapchainImagesKHR&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkAcquireNextImageKHR(
        const ApiCallInfo&                          call_info,
        args::AcquireNextImageKHR&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkQueuePresentKHR(
        const ApiCallInfo&                          call_info,
        args::QueuePresentKHR&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceGroupPresentCapabilitiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetDeviceGroupPresentCapabilitiesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceGroupSurfacePresentModesKHR(
        const ApiCallInfo&                          call_info,
        args::GetDeviceGroupSurfacePresentModesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDevicePresentRectanglesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDevicePresentRectanglesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkAcquireNextImage2KHR(
        const ApiCallInfo&                          call_info,
        args::AcquireNextImage2KHR&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceDisplayPropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceDisplayPropertiesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceDisplayPlanePropertiesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDisplayPlaneSupportedDisplaysKHR(
        const ApiCallInfo&                          call_info,
        args::GetDisplayPlaneSupportedDisplaysKHR&  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDisplayModePropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetDisplayModePropertiesKHR&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateDisplayModeKHR(
        const ApiCallInfo&                          call_info,
        args::CreateDisplayModeKHR&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDisplayPlaneCapabilitiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetDisplayPlaneCapabilitiesKHR&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateDisplayPlaneSurfaceKHR(
        const ApiCallInfo&                          call_info,
        args::CreateDisplayPlaneSurfaceKHR&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateSharedSwapchainsKHR(
        const ApiCallInfo&                          call_info,
        args::CreateSharedSwapchainsKHR&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateXlibSurfaceKHR(
        const ApiCallInfo&                          call_info,
        args::CreateXlibSurfaceKHR&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceXlibPresentationSupportKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceXlibPresentationSupportKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateXcbSurfaceKHR(
        const ApiCallInfo&                          call_info,
        args::CreateXcbSurfaceKHR&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceXcbPresentationSupportKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceXcbPresentationSupportKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateWaylandSurfaceKHR(
        const ApiCallInfo&                          call_info,
        args::CreateWaylandSurfaceKHR&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceWaylandPresentationSupportKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceWaylandPresentationSupportKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateAndroidSurfaceKHR(
        const ApiCallInfo&                          call_info,
        args::CreateAndroidSurfaceKHR&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateWin32SurfaceKHR(
        const ApiCallInfo&                          call_info,
        args::CreateWin32SurfaceKHR&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceWin32PresentationSupportKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceWin32PresentationSupportKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceVideoCapabilitiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceVideoCapabilitiesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceVideoFormatPropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceVideoFormatPropertiesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateVideoSessionKHR(
        const ApiCallInfo&                          call_info,
        args::CreateVideoSessionKHR&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyVideoSessionKHR(
        const ApiCallInfo&                          call_info,
        args::DestroyVideoSessionKHR&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetVideoSessionMemoryRequirementsKHR(
        const ApiCallInfo&                          call_info,
        args::GetVideoSessionMemoryRequirementsKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkBindVideoSessionMemoryKHR(
        const ApiCallInfo&                          call_info,
        args::BindVideoSessionMemoryKHR&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateVideoSessionParametersKHR(
        const ApiCallInfo&                          call_info,
        args::CreateVideoSessionParametersKHR&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkUpdateVideoSessionParametersKHR(
        const ApiCallInfo&                          call_info,
        args::UpdateVideoSessionParametersKHR&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyVideoSessionParametersKHR(
        const ApiCallInfo&                          call_info,
        args::DestroyVideoSessionParametersKHR&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginVideoCodingKHR(
        const ApiCallInfo&                          call_info,
        args::CmdBeginVideoCodingKHR&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndVideoCodingKHR(
        const ApiCallInfo&                          call_info,
        args::CmdEndVideoCodingKHR&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdControlVideoCodingKHR(
        const ApiCallInfo&                          call_info,
        args::CmdControlVideoCodingKHR&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDecodeVideoKHR(
        const ApiCallInfo&                          call_info,
        args::CmdDecodeVideoKHR&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginRenderingKHR(
        const ApiCallInfo&                          call_info,
        args::CmdBeginRenderingKHR&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndRenderingKHR(
        const ApiCallInfo&                          call_info,
        args::CmdEndRenderingKHR&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceFeatures2KHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceFeatures2KHR&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceProperties2KHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceProperties2KHR&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceFormatProperties2KHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceFormatProperties2KHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceImageFormatProperties2KHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceImageFormatProperties2KHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceQueueFamilyProperties2KHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceQueueFamilyProperties2KHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceMemoryProperties2KHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceMemoryProperties2KHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceSparseImageFormatProperties2KHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceGroupPeerMemoryFeaturesKHR(
        const ApiCallInfo&                          call_info,
        args::GetDeviceGroupPeerMemoryFeaturesKHR&  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDeviceMaskKHR(
        const ApiCallInfo&                          call_info,
        args::CmdSetDeviceMaskKHR&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDispatchBaseKHR(
        const ApiCallInfo&                          call_info,
        args::CmdDispatchBaseKHR&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkTrimCommandPoolKHR(
        const ApiCallInfo&                          call_info,
        args::TrimCommandPoolKHR&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkEnumeratePhysicalDeviceGroupsKHR(
        const ApiCallInfo&                          call_info,
        args::EnumeratePhysicalDeviceGroupsKHR&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceExternalBufferPropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceExternalBufferPropertiesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetMemoryWin32HandleKHR(
        const ApiCallInfo&                          call_info,
        args::GetMemoryWin32HandleKHR&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetMemoryWin32HandlePropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetMemoryWin32HandlePropertiesKHR&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetMemoryFdKHR(
        const ApiCallInfo&                          call_info,
        args::GetMemoryFdKHR&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetMemoryFdPropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetMemoryFdPropertiesKHR&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceExternalSemaphorePropertiesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkImportSemaphoreWin32HandleKHR(
        const ApiCallInfo&                          call_info,
        args::ImportSemaphoreWin32HandleKHR&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetSemaphoreWin32HandleKHR(
        const ApiCallInfo&                          call_info,
        args::GetSemaphoreWin32HandleKHR&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkImportSemaphoreFdKHR(
        const ApiCallInfo&                          call_info,
        args::ImportSemaphoreFdKHR&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetSemaphoreFdKHR(
        const ApiCallInfo&                          call_info,
        args::GetSemaphoreFdKHR&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdPushDescriptorSetKHR(
        const ApiCallInfo&                          call_info,
        args::CmdPushDescriptorSetKHR&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateDescriptorUpdateTemplateKHR(
        const ApiCallInfo&                          call_info,
        args::CreateDescriptorUpdateTemplateKHR&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyDescriptorUpdateTemplateKHR(
        const ApiCallInfo&                          call_info,
        args::DestroyDescriptorUpdateTemplateKHR&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateRenderPass2KHR(
        const ApiCallInfo&                          call_info,
        args::CreateRenderPass2KHR&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginRenderPass2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdBeginRenderPass2KHR&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdNextSubpass2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdNextSubpass2KHR&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndRenderPass2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdEndRenderPass2KHR&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetSwapchainStatusKHR(
        const ApiCallInfo&                          call_info,
        args::GetSwapchainStatusKHR&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceExternalFencePropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceExternalFencePropertiesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkImportFenceWin32HandleKHR(
        const ApiCallInfo&                          call_info,
        args::ImportFenceWin32HandleKHR&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetFenceWin32HandleKHR(
        const ApiCallInfo&                          call_info,
        args::GetFenceWin32HandleKHR&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkImportFenceFdKHR(
        const ApiCallInfo&                          call_info,
        args::ImportFenceFdKHR&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetFenceFdKHR(
        const ApiCallInfo&                          call_info,
        args::GetFenceFdKHR&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
        const ApiCallInfo&                          call_info,
        args::EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkAcquireProfilingLockKHR(
        const ApiCallInfo&                          call_info,
        args::AcquireProfilingLockKHR&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkReleaseProfilingLockKHR(
        const ApiCallInfo&                          call_info,
        args::ReleaseProfilingLockKHR&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceSurfaceCapabilities2KHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceSurfaceCapabilities2KHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceSurfaceFormats2KHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceSurfaceFormats2KHR&  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceDisplayProperties2KHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceDisplayProperties2KHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceDisplayPlaneProperties2KHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDisplayModeProperties2KHR(
        const ApiCallInfo&                          call_info,
        args::GetDisplayModeProperties2KHR&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDisplayPlaneCapabilities2KHR(
        const ApiCallInfo&                          call_info,
        args::GetDisplayPlaneCapabilities2KHR&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageMemoryRequirements2KHR(
        const ApiCallInfo&                          call_info,
        args::GetImageMemoryRequirements2KHR&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetBufferMemoryRequirements2KHR(
        const ApiCallInfo&                          call_info,
        args::GetBufferMemoryRequirements2KHR&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageSparseMemoryRequirements2KHR(
        const ApiCallInfo&                          call_info,
        args::GetImageSparseMemoryRequirements2KHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateSamplerYcbcrConversionKHR(
        const ApiCallInfo&                          call_info,
        args::CreateSamplerYcbcrConversionKHR&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroySamplerYcbcrConversionKHR(
        const ApiCallInfo&                          call_info,
        args::DestroySamplerYcbcrConversionKHR&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkBindBufferMemory2KHR(
        const ApiCallInfo&                          call_info,
        args::BindBufferMemory2KHR&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkBindImageMemory2KHR(
        const ApiCallInfo&                          call_info,
        args::BindImageMemory2KHR&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDescriptorSetLayoutSupportKHR(
        const ApiCallInfo&                          call_info,
        args::GetDescriptorSetLayoutSupportKHR&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndirectCountKHR(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndirectCountKHR&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndexedIndirectCountKHR(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndexedIndirectCountKHR&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetSemaphoreCounterValueKHR(
        const ApiCallInfo&                          call_info,
        args::GetSemaphoreCounterValueKHR&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkWaitSemaphoresKHR(
        const ApiCallInfo&                          call_info,
        args::WaitSemaphoresKHR&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSignalSemaphoreKHR(
        const ApiCallInfo&                          call_info,
        args::SignalSemaphoreKHR&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceFragmentShadingRatesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceFragmentShadingRatesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetFragmentShadingRateKHR(
        const ApiCallInfo&                          call_info,
        args::CmdSetFragmentShadingRateKHR&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetRenderingAttachmentLocationsKHR(
        const ApiCallInfo&                          call_info,
        args::CmdSetRenderingAttachmentLocationsKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetRenderingInputAttachmentIndicesKHR(
        const ApiCallInfo&                          call_info,
        args::CmdSetRenderingInputAttachmentIndicesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkWaitForPresentKHR(
        const ApiCallInfo&                          call_info,
        args::WaitForPresentKHR&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetBufferDeviceAddressKHR(
        const ApiCallInfo&                          call_info,
        args::GetBufferDeviceAddressKHR&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetBufferOpaqueCaptureAddressKHR(
        const ApiCallInfo&                          call_info,
        args::GetBufferOpaqueCaptureAddressKHR&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceMemoryOpaqueCaptureAddressKHR(
        const ApiCallInfo&                          call_info,
        args::GetDeviceMemoryOpaqueCaptureAddressKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateDeferredOperationKHR(
        const ApiCallInfo&                          call_info,
        args::CreateDeferredOperationKHR&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyDeferredOperationKHR(
        const ApiCallInfo&                          call_info,
        args::DestroyDeferredOperationKHR&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeferredOperationMaxConcurrencyKHR(
        const ApiCallInfo&                          call_info,
        args::GetDeferredOperationMaxConcurrencyKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeferredOperationResultKHR(
        const ApiCallInfo&                          call_info,
        args::GetDeferredOperationResultKHR&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDeferredOperationJoinKHR(
        const ApiCallInfo&                          call_info,
        args::DeferredOperationJoinKHR&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPipelineExecutablePropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPipelineExecutablePropertiesKHR&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPipelineExecutableStatisticsKHR(
        const ApiCallInfo&                          call_info,
        args::GetPipelineExecutableStatisticsKHR&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPipelineExecutableInternalRepresentationsKHR(
        const ApiCallInfo&                          call_info,
        args::GetPipelineExecutableInternalRepresentationsKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkMapMemory2KHR(
        const ApiCallInfo&                          call_info,
        args::MapMemory2KHR&                        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkUnmapMemory2KHR(
        const ApiCallInfo&                          call_info,
        args::UnmapMemory2KHR&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetEncodedVideoSessionParametersKHR(
        const ApiCallInfo&                          call_info,
        args::GetEncodedVideoSessionParametersKHR&  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEncodeVideoKHR(
        const ApiCallInfo&                          call_info,
        args::CmdEncodeVideoKHR&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetEvent2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdSetEvent2KHR&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdResetEvent2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdResetEvent2KHR&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdWaitEvents2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdWaitEvents2KHR&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdPipelineBarrier2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdPipelineBarrier2KHR&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdWriteTimestamp2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdWriteTimestamp2KHR&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkQueueSubmit2KHR(
        const ApiCallInfo&                          call_info,
        args::QueueSubmit2KHR&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindIndexBuffer3KHR(
        const ApiCallInfo&                          call_info,
        args::CmdBindIndexBuffer3KHR&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindVertexBuffers3KHR(
        const ApiCallInfo&                          call_info,
        args::CmdBindVertexBuffers3KHR&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndirect2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndirect2KHR&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndexedIndirect2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndexedIndirect2KHR&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDispatchIndirect2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdDispatchIndirect2KHR&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyMemoryKHR(
        const ApiCallInfo&                          call_info,
        args::CmdCopyMemoryKHR&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyMemoryToImageKHR(
        const ApiCallInfo&                          call_info,
        args::CmdCopyMemoryToImageKHR&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyImageToMemoryKHR(
        const ApiCallInfo&                          call_info,
        args::CmdCopyImageToMemoryKHR&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdUpdateMemoryKHR(
        const ApiCallInfo&                          call_info,
        args::CmdUpdateMemoryKHR&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdFillMemoryKHR(
        const ApiCallInfo&                          call_info,
        args::CmdFillMemoryKHR&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyQueryPoolResultsToMemoryKHR(
        const ApiCallInfo&                          call_info,
        args::CmdCopyQueryPoolResultsToMemoryKHR&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndirectCount2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndirectCount2KHR&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndexedIndirectCount2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndexedIndirectCount2KHR&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginConditionalRendering2EXT(
        const ApiCallInfo&                          call_info,
        args::CmdBeginConditionalRendering2EXT&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindTransformFeedbackBuffers2EXT(
        const ApiCallInfo&                          call_info,
        args::CmdBindTransformFeedbackBuffers2EXT&  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginTransformFeedback2EXT(
        const ApiCallInfo&                          call_info,
        args::CmdBeginTransformFeedback2EXT&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndTransformFeedback2EXT(
        const ApiCallInfo&                          call_info,
        args::CmdEndTransformFeedback2EXT&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndirectByteCount2EXT(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndirectByteCount2EXT&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawMeshTasksIndirect2EXT(
        const ApiCallInfo&                          call_info,
        args::CmdDrawMeshTasksIndirect2EXT&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawMeshTasksIndirectCount2EXT(
        const ApiCallInfo&                          call_info,
        args::CmdDrawMeshTasksIndirectCount2EXT&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdWriteMarkerToMemoryAMD(
        const ApiCallInfo&                          call_info,
        args::CmdWriteMarkerToMemoryAMD&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateAccelerationStructure2KHR(
        const ApiCallInfo&                          call_info,
        args::CreateAccelerationStructure2KHR&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyBuffer2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdCopyBuffer2KHR&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyImage2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdCopyImage2KHR&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyBufferToImage2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdCopyBufferToImage2KHR&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyImageToBuffer2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdCopyImageToBuffer2KHR&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBlitImage2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdBlitImage2KHR&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdResolveImage2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdResolveImage2KHR&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdTraceRaysIndirect2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdTraceRaysIndirect2KHR&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceBufferMemoryRequirementsKHR(
        const ApiCallInfo&                          call_info,
        args::GetDeviceBufferMemoryRequirementsKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceImageMemoryRequirementsKHR(
        const ApiCallInfo&                          call_info,
        args::GetDeviceImageMemoryRequirementsKHR&  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceImageSparseMemoryRequirementsKHR(
        const ApiCallInfo&                          call_info,
        args::GetDeviceImageSparseMemoryRequirementsKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindIndexBuffer2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdBindIndexBuffer2KHR&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetRenderingAreaGranularityKHR(
        const ApiCallInfo&                          call_info,
        args::GetRenderingAreaGranularityKHR&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceImageSubresourceLayoutKHR(
        const ApiCallInfo&                          call_info,
        args::GetDeviceImageSubresourceLayoutKHR&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageSubresourceLayout2KHR(
        const ApiCallInfo&                          call_info,
        args::GetImageSubresourceLayout2KHR&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkWaitForPresent2KHR(
        const ApiCallInfo&                          call_info,
        args::WaitForPresent2KHR&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreatePipelineBinariesKHR(
        const ApiCallInfo&                          call_info,
        args::CreatePipelineBinariesKHR&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyPipelineBinaryKHR(
        const ApiCallInfo&                          call_info,
        args::DestroyPipelineBinaryKHR&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPipelineKeyKHR(
        const ApiCallInfo&                          call_info,
        args::GetPipelineKeyKHR&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPipelineBinaryDataKHR(
        const ApiCallInfo&                          call_info,
        args::GetPipelineBinaryDataKHR&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkReleaseCapturedPipelineDataKHR(
        const ApiCallInfo&                          call_info,
        args::ReleaseCapturedPipelineDataKHR&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkReleaseSwapchainImagesKHR(
        const ApiCallInfo&                          call_info,
        args::ReleaseSwapchainImagesKHR&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceCooperativeMatrixPropertiesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetLineStippleKHR(
        const ApiCallInfo&                          call_info,
        args::CmdSetLineStippleKHR&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceCalibrateableTimeDomainsKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetCalibratedTimestampsKHR(
        const ApiCallInfo&                          call_info,
        args::GetCalibratedTimestampsKHR&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindDescriptorSets2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdBindDescriptorSets2KHR&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdPushConstants2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdPushConstants2KHR&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdPushDescriptorSet2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdPushDescriptorSet2KHR&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDescriptorBufferOffsets2EXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDescriptorBufferOffsets2EXT&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT(
        const ApiCallInfo&                          call_info,
        args::CmdBindDescriptorBufferEmbeddedSamplers2EXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyMemoryIndirectKHR(
        const ApiCallInfo&                          call_info,
        args::CmdCopyMemoryIndirectKHR&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyMemoryToImageIndirectKHR(
        const ApiCallInfo&                          call_info,
        args::CmdCopyMemoryToImageIndirectKHR&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceFaultReportsKHR(
        const ApiCallInfo&                          call_info,
        args::GetDeviceFaultReportsKHR&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceFaultDebugInfoKHR(
        const ApiCallInfo&                          call_info,
        args::GetDeviceFaultDebugInfoKHR&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndRendering2KHR(
        const ApiCallInfo&                          call_info,
        args::CmdEndRendering2KHR&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkFrameBoundaryANDROID(
        const ApiCallInfo&                          call_info,
        args::FrameBoundaryANDROID&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateDebugReportCallbackEXT(
        const ApiCallInfo&                          call_info,
        args::CreateDebugReportCallbackEXT&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyDebugReportCallbackEXT(
        const ApiCallInfo&                          call_info,
        args::DestroyDebugReportCallbackEXT&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDebugReportMessageEXT(
        const ApiCallInfo&                          call_info,
        args::DebugReportMessageEXT&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDebugMarkerSetObjectTagEXT(
        const ApiCallInfo&                          call_info,
        args::DebugMarkerSetObjectTagEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDebugMarkerSetObjectNameEXT(
        const ApiCallInfo&                          call_info,
        args::DebugMarkerSetObjectNameEXT&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDebugMarkerBeginEXT(
        const ApiCallInfo&                          call_info,
        args::CmdDebugMarkerBeginEXT&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDebugMarkerEndEXT(
        const ApiCallInfo&                          call_info,
        args::CmdDebugMarkerEndEXT&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDebugMarkerInsertEXT(
        const ApiCallInfo&                          call_info,
        args::CmdDebugMarkerInsertEXT&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindTransformFeedbackBuffersEXT(
        const ApiCallInfo&                          call_info,
        args::CmdBindTransformFeedbackBuffersEXT&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginTransformFeedbackEXT(
        const ApiCallInfo&                          call_info,
        args::CmdBeginTransformFeedbackEXT&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndTransformFeedbackEXT(
        const ApiCallInfo&                          call_info,
        args::CmdEndTransformFeedbackEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginQueryIndexedEXT(
        const ApiCallInfo&                          call_info,
        args::CmdBeginQueryIndexedEXT&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndQueryIndexedEXT(
        const ApiCallInfo&                          call_info,
        args::CmdEndQueryIndexedEXT&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndirectByteCountEXT(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndirectByteCountEXT&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageViewHandleNVX(
        const ApiCallInfo&                          call_info,
        args::GetImageViewHandleNVX&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageViewHandle64NVX(
        const ApiCallInfo&                          call_info,
        args::GetImageViewHandle64NVX&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageViewAddressNVX(
        const ApiCallInfo&                          call_info,
        args::GetImageViewAddressNVX&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceCombinedImageSamplerIndexNVX(
        const ApiCallInfo&                          call_info,
        args::GetDeviceCombinedImageSamplerIndexNVX& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndirectCountAMD(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndirectCountAMD&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawIndexedIndirectCountAMD(
        const ApiCallInfo&                          call_info,
        args::CmdDrawIndexedIndirectCountAMD&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetShaderInfoAMD(
        const ApiCallInfo&                          call_info,
        args::GetShaderInfoAMD&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateStreamDescriptorSurfaceGGP(
        const ApiCallInfo&                          call_info,
        args::CreateStreamDescriptorSurfaceGGP&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceExternalImageFormatPropertiesNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetMemoryWin32HandleNV(
        const ApiCallInfo&                          call_info,
        args::GetMemoryWin32HandleNV&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateViSurfaceNN(
        const ApiCallInfo&                          call_info,
        args::CreateViSurfaceNN&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginConditionalRenderingEXT(
        const ApiCallInfo&                          call_info,
        args::CmdBeginConditionalRenderingEXT&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndConditionalRenderingEXT(
        const ApiCallInfo&                          call_info,
        args::CmdEndConditionalRenderingEXT&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetViewportWScalingNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetViewportWScalingNV&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkReleaseDisplayEXT(
        const ApiCallInfo&                          call_info,
        args::ReleaseDisplayEXT&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkAcquireXlibDisplayEXT(
        const ApiCallInfo&                          call_info,
        args::AcquireXlibDisplayEXT&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetRandROutputDisplayEXT(
        const ApiCallInfo&                          call_info,
        args::GetRandROutputDisplayEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceSurfaceCapabilities2EXT(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceSurfaceCapabilities2EXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDisplayPowerControlEXT(
        const ApiCallInfo&                          call_info,
        args::DisplayPowerControlEXT&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkRegisterDeviceEventEXT(
        const ApiCallInfo&                          call_info,
        args::RegisterDeviceEventEXT&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkRegisterDisplayEventEXT(
        const ApiCallInfo&                          call_info,
        args::RegisterDisplayEventEXT&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetSwapchainCounterEXT(
        const ApiCallInfo&                          call_info,
        args::GetSwapchainCounterEXT&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetRefreshCycleDurationGOOGLE(
        const ApiCallInfo&                          call_info,
        args::GetRefreshCycleDurationGOOGLE&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPastPresentationTimingGOOGLE(
        const ApiCallInfo&                          call_info,
        args::GetPastPresentationTimingGOOGLE&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDiscardRectangleEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDiscardRectangleEXT&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDiscardRectangleEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDiscardRectangleEnableEXT&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDiscardRectangleModeEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDiscardRectangleModeEXT&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSetHdrMetadataEXT(
        const ApiCallInfo&                          call_info,
        args::SetHdrMetadataEXT&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateIOSSurfaceMVK(
        const ApiCallInfo&                          call_info,
        args::CreateIOSSurfaceMVK&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateMacOSSurfaceMVK(
        const ApiCallInfo&                          call_info,
        args::CreateMacOSSurfaceMVK&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSetDebugUtilsObjectNameEXT(
        const ApiCallInfo&                          call_info,
        args::SetDebugUtilsObjectNameEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSetDebugUtilsObjectTagEXT(
        const ApiCallInfo&                          call_info,
        args::SetDebugUtilsObjectTagEXT&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkQueueBeginDebugUtilsLabelEXT(
        const ApiCallInfo&                          call_info,
        args::QueueBeginDebugUtilsLabelEXT&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkQueueEndDebugUtilsLabelEXT(
        const ApiCallInfo&                          call_info,
        args::QueueEndDebugUtilsLabelEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkQueueInsertDebugUtilsLabelEXT(
        const ApiCallInfo&                          call_info,
        args::QueueInsertDebugUtilsLabelEXT&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginDebugUtilsLabelEXT(
        const ApiCallInfo&                          call_info,
        args::CmdBeginDebugUtilsLabelEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndDebugUtilsLabelEXT(
        const ApiCallInfo&                          call_info,
        args::CmdEndDebugUtilsLabelEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdInsertDebugUtilsLabelEXT(
        const ApiCallInfo&                          call_info,
        args::CmdInsertDebugUtilsLabelEXT&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateDebugUtilsMessengerEXT(
        const ApiCallInfo&                          call_info,
        args::CreateDebugUtilsMessengerEXT&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyDebugUtilsMessengerEXT(
        const ApiCallInfo&                          call_info,
        args::DestroyDebugUtilsMessengerEXT&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSubmitDebugUtilsMessageEXT(
        const ApiCallInfo&                          call_info,
        args::SubmitDebugUtilsMessageEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetAndroidHardwareBufferPropertiesANDROID(
        const ApiCallInfo&                          call_info,
        args::GetAndroidHardwareBufferPropertiesANDROID& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetMemoryAndroidHardwareBufferANDROID(
        const ApiCallInfo&                          call_info,
        args::GetMemoryAndroidHardwareBufferANDROID& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateGpaSessionAMD(
        const ApiCallInfo&                          call_info,
        args::CreateGpaSessionAMD&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyGpaSessionAMD(
        const ApiCallInfo&                          call_info,
        args::DestroyGpaSessionAMD&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSetGpaDeviceClockModeAMD(
        const ApiCallInfo&                          call_info,
        args::SetGpaDeviceClockModeAMD&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetGpaDeviceClockInfoAMD(
        const ApiCallInfo&                          call_info,
        args::GetGpaDeviceClockInfoAMD&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginGpaSessionAMD(
        const ApiCallInfo&                          call_info,
        args::CmdBeginGpaSessionAMD&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndGpaSessionAMD(
        const ApiCallInfo&                          call_info,
        args::CmdEndGpaSessionAMD&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginGpaSampleAMD(
        const ApiCallInfo&                          call_info,
        args::CmdBeginGpaSampleAMD&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndGpaSampleAMD(
        const ApiCallInfo&                          call_info,
        args::CmdEndGpaSampleAMD&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetGpaSessionStatusAMD(
        const ApiCallInfo&                          call_info,
        args::GetGpaSessionStatusAMD&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetGpaSessionResultsAMD(
        const ApiCallInfo&                          call_info,
        args::GetGpaSessionResultsAMD&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkResetGpaSessionAMD(
        const ApiCallInfo&                          call_info,
        args::ResetGpaSessionAMD&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyGpaSessionResultsAMD(
        const ApiCallInfo&                          call_info,
        args::CmdCopyGpaSessionResultsAMD&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetSampleLocationsEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetSampleLocationsEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceMultisamplePropertiesEXT(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceMultisamplePropertiesEXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageDrmFormatModifierPropertiesEXT(
        const ApiCallInfo&                          call_info,
        args::GetImageDrmFormatModifierPropertiesEXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateValidationCacheEXT(
        const ApiCallInfo&                          call_info,
        args::CreateValidationCacheEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyValidationCacheEXT(
        const ApiCallInfo&                          call_info,
        args::DestroyValidationCacheEXT&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkMergeValidationCachesEXT(
        const ApiCallInfo&                          call_info,
        args::MergeValidationCachesEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetValidationCacheDataEXT(
        const ApiCallInfo&                          call_info,
        args::GetValidationCacheDataEXT&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindShadingRateImageNV(
        const ApiCallInfo&                          call_info,
        args::CmdBindShadingRateImageNV&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetViewportShadingRatePaletteNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetViewportShadingRatePaletteNV&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetCoarseSampleOrderNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetCoarseSampleOrderNV&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateAccelerationStructureNV(
        const ApiCallInfo&                          call_info,
        args::CreateAccelerationStructureNV&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyAccelerationStructureNV(
        const ApiCallInfo&                          call_info,
        args::DestroyAccelerationStructureNV&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetAccelerationStructureMemoryRequirementsNV(
        const ApiCallInfo&                          call_info,
        args::GetAccelerationStructureMemoryRequirementsNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkBindAccelerationStructureMemoryNV(
        const ApiCallInfo&                          call_info,
        args::BindAccelerationStructureMemoryNV&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBuildAccelerationStructureNV(
        const ApiCallInfo&                          call_info,
        args::CmdBuildAccelerationStructureNV&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyAccelerationStructureNV(
        const ApiCallInfo&                          call_info,
        args::CmdCopyAccelerationStructureNV&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdTraceRaysNV(
        const ApiCallInfo&                          call_info,
        args::CmdTraceRaysNV&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateRayTracingPipelinesNV(
        const ApiCallInfo&                          call_info,
        args::CreateRayTracingPipelinesNV&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetRayTracingShaderGroupHandlesKHR(
        const ApiCallInfo&                          call_info,
        args::GetRayTracingShaderGroupHandlesKHR&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetRayTracingShaderGroupHandlesNV(
        const ApiCallInfo&                          call_info,
        args::GetRayTracingShaderGroupHandlesNV&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetAccelerationStructureHandleNV(
        const ApiCallInfo&                          call_info,
        args::GetAccelerationStructureHandleNV&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdWriteAccelerationStructuresPropertiesNV(
        const ApiCallInfo&                          call_info,
        args::CmdWriteAccelerationStructuresPropertiesNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCompileDeferredNV(
        const ApiCallInfo&                          call_info,
        args::CompileDeferredNV&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetMemoryHostPointerPropertiesEXT(
        const ApiCallInfo&                          call_info,
        args::GetMemoryHostPointerPropertiesEXT&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdWriteBufferMarkerAMD(
        const ApiCallInfo&                          call_info,
        args::CmdWriteBufferMarkerAMD&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdWriteBufferMarker2AMD(
        const ApiCallInfo&                          call_info,
        args::CmdWriteBufferMarker2AMD&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceCalibrateableTimeDomainsEXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetCalibratedTimestampsEXT(
        const ApiCallInfo&                          call_info,
        args::GetCalibratedTimestampsEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawMeshTasksNV(
        const ApiCallInfo&                          call_info,
        args::CmdDrawMeshTasksNV&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawMeshTasksIndirectNV(
        const ApiCallInfo&                          call_info,
        args::CmdDrawMeshTasksIndirectNV&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawMeshTasksIndirectCountNV(
        const ApiCallInfo&                          call_info,
        args::CmdDrawMeshTasksIndirectCountNV&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetExclusiveScissorEnableNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetExclusiveScissorEnableNV&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetExclusiveScissorNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetExclusiveScissorNV&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetCheckpointNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetCheckpointNV&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetQueueCheckpointDataNV(
        const ApiCallInfo&                          call_info,
        args::GetQueueCheckpointDataNV&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetQueueCheckpointData2NV(
        const ApiCallInfo&                          call_info,
        args::GetQueueCheckpointData2NV&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSetSwapchainPresentTimingQueueSizeEXT(
        const ApiCallInfo&                          call_info,
        args::SetSwapchainPresentTimingQueueSizeEXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetSwapchainTimingPropertiesEXT(
        const ApiCallInfo&                          call_info,
        args::GetSwapchainTimingPropertiesEXT&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetSwapchainTimeDomainPropertiesEXT(
        const ApiCallInfo&                          call_info,
        args::GetSwapchainTimeDomainPropertiesEXT&  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPastPresentationTimingEXT(
        const ApiCallInfo&                          call_info,
        args::GetPastPresentationTimingEXT&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkInitializePerformanceApiINTEL(
        const ApiCallInfo&                          call_info,
        args::InitializePerformanceApiINTEL&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkUninitializePerformanceApiINTEL(
        const ApiCallInfo&                          call_info,
        args::UninitializePerformanceApiINTEL&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetPerformanceMarkerINTEL(
        const ApiCallInfo&                          call_info,
        args::CmdSetPerformanceMarkerINTEL&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetPerformanceStreamMarkerINTEL(
        const ApiCallInfo&                          call_info,
        args::CmdSetPerformanceStreamMarkerINTEL&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetPerformanceOverrideINTEL(
        const ApiCallInfo&                          call_info,
        args::CmdSetPerformanceOverrideINTEL&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkAcquirePerformanceConfigurationINTEL(
        const ApiCallInfo&                          call_info,
        args::AcquirePerformanceConfigurationINTEL& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkReleasePerformanceConfigurationINTEL(
        const ApiCallInfo&                          call_info,
        args::ReleasePerformanceConfigurationINTEL& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkQueueSetPerformanceConfigurationINTEL(
        const ApiCallInfo&                          call_info,
        args::QueueSetPerformanceConfigurationINTEL& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPerformanceParameterINTEL(
        const ApiCallInfo&                          call_info,
        args::GetPerformanceParameterINTEL&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSetLocalDimmingAMD(
        const ApiCallInfo&                          call_info,
        args::SetLocalDimmingAMD&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateImagePipeSurfaceFUCHSIA(
        const ApiCallInfo&                          call_info,
        args::CreateImagePipeSurfaceFUCHSIA&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateMetalSurfaceEXT(
        const ApiCallInfo&                          call_info,
        args::CreateMetalSurfaceEXT&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetBufferDeviceAddressEXT(
        const ApiCallInfo&                          call_info,
        args::GetBufferDeviceAddressEXT&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceToolPropertiesEXT(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceToolPropertiesEXT&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceCooperativeMatrixPropertiesNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceSurfacePresentModes2EXT(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceSurfacePresentModes2EXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkAcquireFullScreenExclusiveModeEXT(
        const ApiCallInfo&                          call_info,
        args::AcquireFullScreenExclusiveModeEXT&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkReleaseFullScreenExclusiveModeEXT(
        const ApiCallInfo&                          call_info,
        args::ReleaseFullScreenExclusiveModeEXT&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceGroupSurfacePresentModes2EXT(
        const ApiCallInfo&                          call_info,
        args::GetDeviceGroupSurfacePresentModes2EXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateHeadlessSurfaceEXT(
        const ApiCallInfo&                          call_info,
        args::CreateHeadlessSurfaceEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetLineStippleEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetLineStippleEXT&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkResetQueryPoolEXT(
        const ApiCallInfo&                          call_info,
        args::ResetQueryPoolEXT&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetCullModeEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetCullModeEXT&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetFrontFaceEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetFrontFaceEXT&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetPrimitiveTopologyEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetPrimitiveTopologyEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetViewportWithCountEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetViewportWithCountEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetScissorWithCountEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetScissorWithCountEXT&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindVertexBuffers2EXT(
        const ApiCallInfo&                          call_info,
        args::CmdBindVertexBuffers2EXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthTestEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthTestEnableEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthWriteEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthWriteEnableEXT&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthCompareOpEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthCompareOpEXT&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthBoundsTestEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthBoundsTestEnableEXT&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetStencilTestEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetStencilTestEnableEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetStencilOpEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetStencilOpEXT&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCopyMemoryToImageEXT(
        const ApiCallInfo&                          call_info,
        args::CopyMemoryToImageEXT&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCopyImageToMemoryEXT(
        const ApiCallInfo&                          call_info,
        args::CopyImageToMemoryEXT&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCopyImageToImageEXT(
        const ApiCallInfo&                          call_info,
        args::CopyImageToImageEXT&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkTransitionImageLayoutEXT(
        const ApiCallInfo&                          call_info,
        args::TransitionImageLayoutEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetImageSubresourceLayout2EXT(
        const ApiCallInfo&                          call_info,
        args::GetImageSubresourceLayout2EXT&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkReleaseSwapchainImagesEXT(
        const ApiCallInfo&                          call_info,
        args::ReleaseSwapchainImagesEXT&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetGeneratedCommandsMemoryRequirementsNV(
        const ApiCallInfo&                          call_info,
        args::GetGeneratedCommandsMemoryRequirementsNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdPreprocessGeneratedCommandsNV(
        const ApiCallInfo&                          call_info,
        args::CmdPreprocessGeneratedCommandsNV&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdExecuteGeneratedCommandsNV(
        const ApiCallInfo&                          call_info,
        args::CmdExecuteGeneratedCommandsNV&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindPipelineShaderGroupNV(
        const ApiCallInfo&                          call_info,
        args::CmdBindPipelineShaderGroupNV&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateIndirectCommandsLayoutNV(
        const ApiCallInfo&                          call_info,
        args::CreateIndirectCommandsLayoutNV&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyIndirectCommandsLayoutNV(
        const ApiCallInfo&                          call_info,
        args::DestroyIndirectCommandsLayoutNV&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthBias2EXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthBias2EXT&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkAcquireDrmDisplayEXT(
        const ApiCallInfo&                          call_info,
        args::AcquireDrmDisplayEXT&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDrmDisplayEXT(
        const ApiCallInfo&                          call_info,
        args::GetDrmDisplayEXT&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreatePrivateDataSlotEXT(
        const ApiCallInfo&                          call_info,
        args::CreatePrivateDataSlotEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyPrivateDataSlotEXT(
        const ApiCallInfo&                          call_info,
        args::DestroyPrivateDataSlotEXT&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSetPrivateDataEXT(
        const ApiCallInfo&                          call_info,
        args::SetPrivateDataEXT&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPrivateDataEXT(
        const ApiCallInfo&                          call_info,
        args::GetPrivateDataEXT&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkQueueSetPerfHintQCOM(
        const ApiCallInfo&                          call_info,
        args::QueueSetPerfHintQCOM&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDispatchTileQCOM(
        const ApiCallInfo&                          call_info,
        args::CmdDispatchTileQCOM&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginPerTileExecutionQCOM(
        const ApiCallInfo&                          call_info,
        args::CmdBeginPerTileExecutionQCOM&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndPerTileExecutionQCOM(
        const ApiCallInfo&                          call_info,
        args::CmdEndPerTileExecutionQCOM&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDescriptorSetLayoutSizeEXT(
        const ApiCallInfo&                          call_info,
        args::GetDescriptorSetLayoutSizeEXT&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDescriptorSetLayoutBindingOffsetEXT(
        const ApiCallInfo&                          call_info,
        args::GetDescriptorSetLayoutBindingOffsetEXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDescriptorEXT(
        const ApiCallInfo&                          call_info,
        args::GetDescriptorEXT&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindDescriptorBuffersEXT(
        const ApiCallInfo&                          call_info,
        args::CmdBindDescriptorBuffersEXT&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDescriptorBufferOffsetsEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDescriptorBufferOffsetsEXT&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindDescriptorBufferEmbeddedSamplersEXT(
        const ApiCallInfo&                          call_info,
        args::CmdBindDescriptorBufferEmbeddedSamplersEXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetFragmentShadingRateEnumNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetFragmentShadingRateEnumNV&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceFaultInfoEXT(
        const ApiCallInfo&                          call_info,
        args::GetDeviceFaultInfoEXT&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkAcquireWinrtDisplayNV(
        const ApiCallInfo&                          call_info,
        args::AcquireWinrtDisplayNV&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetWinrtDisplayNV(
        const ApiCallInfo&                          call_info,
        args::GetWinrtDisplayNV&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateDirectFBSurfaceEXT(
        const ApiCallInfo&                          call_info,
        args::CreateDirectFBSurfaceEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceDirectFBPresentationSupportEXT(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceDirectFBPresentationSupportEXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetVertexInputEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetVertexInputEXT&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetMemoryZirconHandleFUCHSIA(
        const ApiCallInfo&                          call_info,
        args::GetMemoryZirconHandleFUCHSIA&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetMemoryZirconHandlePropertiesFUCHSIA(
        const ApiCallInfo&                          call_info,
        args::GetMemoryZirconHandlePropertiesFUCHSIA& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkImportSemaphoreZirconHandleFUCHSIA(
        const ApiCallInfo&                          call_info,
        args::ImportSemaphoreZirconHandleFUCHSIA&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetSemaphoreZirconHandleFUCHSIA(
        const ApiCallInfo&                          call_info,
        args::GetSemaphoreZirconHandleFUCHSIA&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindInvocationMaskHUAWEI(
        const ApiCallInfo&                          call_info,
        args::CmdBindInvocationMaskHUAWEI&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetMemoryRemoteAddressNV(
        const ApiCallInfo&                          call_info,
        args::GetMemoryRemoteAddressNV&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetPatchControlPointsEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetPatchControlPointsEXT&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetRasterizerDiscardEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetRasterizerDiscardEnableEXT&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthBiasEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthBiasEnableEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetLogicOpEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetLogicOpEXT&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetPrimitiveRestartEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetPrimitiveRestartEnableEXT&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateScreenSurfaceQNX(
        const ApiCallInfo&                          call_info,
        args::CreateScreenSurfaceQNX&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceScreenPresentationSupportQNX(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceScreenPresentationSupportQNX& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetColorWriteEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetColorWriteEnableEXT&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawMultiEXT(
        const ApiCallInfo&                          call_info,
        args::CmdDrawMultiEXT&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawMultiIndexedEXT(
        const ApiCallInfo&                          call_info,
        args::CmdDrawMultiIndexedEXT&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateMicromapEXT(
        const ApiCallInfo&                          call_info,
        args::CreateMicromapEXT&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyMicromapEXT(
        const ApiCallInfo&                          call_info,
        args::DestroyMicromapEXT&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBuildMicromapsEXT(
        const ApiCallInfo&                          call_info,
        args::CmdBuildMicromapsEXT&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkBuildMicromapsEXT(
        const ApiCallInfo&                          call_info,
        args::BuildMicromapsEXT&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCopyMicromapEXT(
        const ApiCallInfo&                          call_info,
        args::CopyMicromapEXT&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCopyMicromapToMemoryEXT(
        const ApiCallInfo&                          call_info,
        args::CopyMicromapToMemoryEXT&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCopyMemoryToMicromapEXT(
        const ApiCallInfo&                          call_info,
        args::CopyMemoryToMicromapEXT&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkWriteMicromapsPropertiesEXT(
        const ApiCallInfo&                          call_info,
        args::WriteMicromapsPropertiesEXT&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyMicromapEXT(
        const ApiCallInfo&                          call_info,
        args::CmdCopyMicromapEXT&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyMicromapToMemoryEXT(
        const ApiCallInfo&                          call_info,
        args::CmdCopyMicromapToMemoryEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyMemoryToMicromapEXT(
        const ApiCallInfo&                          call_info,
        args::CmdCopyMemoryToMicromapEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdWriteMicromapsPropertiesEXT(
        const ApiCallInfo&                          call_info,
        args::CmdWriteMicromapsPropertiesEXT&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceMicromapCompatibilityEXT(
        const ApiCallInfo&                          call_info,
        args::GetDeviceMicromapCompatibilityEXT&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetMicromapBuildSizesEXT(
        const ApiCallInfo&                          call_info,
        args::GetMicromapBuildSizesEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawClusterHUAWEI(
        const ApiCallInfo&                          call_info,
        args::CmdDrawClusterHUAWEI&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawClusterIndirectHUAWEI(
        const ApiCallInfo&                          call_info,
        args::CmdDrawClusterIndirectHUAWEI&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSetDeviceMemoryPriorityEXT(
        const ApiCallInfo&                          call_info,
        args::SetDeviceMemoryPriorityEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDispatchParametersARM(
        const ApiCallInfo&                          call_info,
        args::CmdSetDispatchParametersARM&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDescriptorSetLayoutHostMappingInfoVALVE(
        const ApiCallInfo&                          call_info,
        args::GetDescriptorSetLayoutHostMappingInfoVALVE& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDescriptorSetHostMappingVALVE(
        const ApiCallInfo&                          call_info,
        args::GetDescriptorSetHostMappingVALVE&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPipelineIndirectMemoryRequirementsNV(
        const ApiCallInfo&                          call_info,
        args::GetPipelineIndirectMemoryRequirementsNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdUpdatePipelineIndirectBufferNV(
        const ApiCallInfo&                          call_info,
        args::CmdUpdatePipelineIndirectBufferNV&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPipelineIndirectDeviceAddressNV(
        const ApiCallInfo&                          call_info,
        args::GetPipelineIndirectDeviceAddressNV&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthClampEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthClampEnableEXT&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetPolygonModeEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetPolygonModeEXT&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetRasterizationSamplesEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetRasterizationSamplesEXT&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetSampleMaskEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetSampleMaskEXT&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetAlphaToCoverageEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetAlphaToCoverageEnableEXT&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetAlphaToOneEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetAlphaToOneEnableEXT&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetLogicOpEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetLogicOpEnableEXT&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetColorBlendEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetColorBlendEnableEXT&            args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetColorBlendEquationEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetColorBlendEquationEXT&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetColorWriteMaskEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetColorWriteMaskEXT&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetTessellationDomainOriginEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetTessellationDomainOriginEXT&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetRasterizationStreamEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetRasterizationStreamEXT&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetConservativeRasterizationModeEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetConservativeRasterizationModeEXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetExtraPrimitiveOverestimationSizeEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetExtraPrimitiveOverestimationSizeEXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthClipEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthClipEnableEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetSampleLocationsEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetSampleLocationsEnableEXT&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetColorBlendAdvancedEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetColorBlendAdvancedEXT&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetProvokingVertexModeEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetProvokingVertexModeEXT&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetLineRasterizationModeEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetLineRasterizationModeEXT&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetLineStippleEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetLineStippleEnableEXT&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthClipNegativeOneToOneEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthClipNegativeOneToOneEXT&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetViewportWScalingEnableNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetViewportWScalingEnableNV&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetViewportSwizzleNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetViewportSwizzleNV&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetCoverageToColorEnableNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetCoverageToColorEnableNV&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetCoverageToColorLocationNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetCoverageToColorLocationNV&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetCoverageModulationModeNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetCoverageModulationModeNV&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetCoverageModulationTableEnableNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetCoverageModulationTableEnableNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetCoverageModulationTableNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetCoverageModulationTableNV&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetShadingRateImageEnableNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetShadingRateImageEnableNV&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetRepresentativeFragmentTestEnableNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetRepresentativeFragmentTestEnableNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetCoverageReductionModeNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetCoverageReductionModeNV&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateTensorARM(
        const ApiCallInfo&                          call_info,
        args::CreateTensorARM&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyTensorARM(
        const ApiCallInfo&                          call_info,
        args::DestroyTensorARM&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateTensorViewARM(
        const ApiCallInfo&                          call_info,
        args::CreateTensorViewARM&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyTensorViewARM(
        const ApiCallInfo&                          call_info,
        args::DestroyTensorViewARM&                 args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetTensorMemoryRequirementsARM(
        const ApiCallInfo&                          call_info,
        args::GetTensorMemoryRequirementsARM&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkBindTensorMemoryARM(
        const ApiCallInfo&                          call_info,
        args::BindTensorMemoryARM&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceTensorMemoryRequirementsARM(
        const ApiCallInfo&                          call_info,
        args::GetDeviceTensorMemoryRequirementsARM& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyTensorARM(
        const ApiCallInfo&                          call_info,
        args::CmdCopyTensorARM&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceExternalTensorPropertiesARM(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceExternalTensorPropertiesARM& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetShaderModuleIdentifierEXT(
        const ApiCallInfo&                          call_info,
        args::GetShaderModuleIdentifierEXT&         args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetShaderModuleCreateInfoIdentifierEXT(
        const ApiCallInfo&                          call_info,
        args::GetShaderModuleCreateInfoIdentifierEXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceOpticalFlowImageFormatsNV(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceOpticalFlowImageFormatsNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateOpticalFlowSessionNV(
        const ApiCallInfo&                          call_info,
        args::CreateOpticalFlowSessionNV&           args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyOpticalFlowSessionNV(
        const ApiCallInfo&                          call_info,
        args::DestroyOpticalFlowSessionNV&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkBindOpticalFlowSessionImageNV(
        const ApiCallInfo&                          call_info,
        args::BindOpticalFlowSessionImageNV&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdOpticalFlowExecuteNV(
        const ApiCallInfo&                          call_info,
        args::CmdOpticalFlowExecuteNV&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkAntiLagUpdateAMD(
        const ApiCallInfo&                          call_info,
        args::AntiLagUpdateAMD&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateShadersEXT(
        const ApiCallInfo&                          call_info,
        args::CreateShadersEXT&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyShaderEXT(
        const ApiCallInfo&                          call_info,
        args::DestroyShaderEXT&                     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetShaderBinaryDataEXT(
        const ApiCallInfo&                          call_info,
        args::GetShaderBinaryDataEXT&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindShadersEXT(
        const ApiCallInfo&                          call_info,
        args::CmdBindShadersEXT&                    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetDepthClampRangeEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetDepthClampRangeEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetFramebufferTilePropertiesQCOM(
        const ApiCallInfo&                          call_info,
        args::GetFramebufferTilePropertiesQCOM&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDynamicRenderingTilePropertiesQCOM(
        const ApiCallInfo&                          call_info,
        args::GetDynamicRenderingTilePropertiesQCOM& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceCooperativeVectorPropertiesNV(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceCooperativeVectorPropertiesNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkConvertCooperativeVectorMatrixNV(
        const ApiCallInfo&                          call_info,
        args::ConvertCooperativeVectorMatrixNV&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdConvertCooperativeVectorMatrixNV(
        const ApiCallInfo&                          call_info,
        args::CmdConvertCooperativeVectorMatrixNV&  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSetLatencySleepModeNV(
        const ApiCallInfo&                          call_info,
        args::SetLatencySleepModeNV&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkLatencySleepNV(
        const ApiCallInfo&                          call_info,
        args::LatencySleepNV&                       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkSetLatencyMarkerNV(
        const ApiCallInfo&                          call_info,
        args::SetLatencyMarkerNV&                   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetLatencyTimingsNV(
        const ApiCallInfo&                          call_info,
        args::GetLatencyTimingsNV&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkQueueNotifyOutOfBandNV(
        const ApiCallInfo&                          call_info,
        args::QueueNotifyOutOfBandNV&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateDataGraphPipelinesARM(
        const ApiCallInfo&                          call_info,
        args::CreateDataGraphPipelinesARM&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateDataGraphPipelineSessionARM(
        const ApiCallInfo&                          call_info,
        args::CreateDataGraphPipelineSessionARM&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDataGraphPipelineSessionBindPointRequirementsARM(
        const ApiCallInfo&                          call_info,
        args::GetDataGraphPipelineSessionBindPointRequirementsARM& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDataGraphPipelineSessionMemoryRequirementsARM(
        const ApiCallInfo&                          call_info,
        args::GetDataGraphPipelineSessionMemoryRequirementsARM& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkBindDataGraphPipelineSessionMemoryARM(
        const ApiCallInfo&                          call_info,
        args::BindDataGraphPipelineSessionMemoryARM& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyDataGraphPipelineSessionARM(
        const ApiCallInfo&                          call_info,
        args::DestroyDataGraphPipelineSessionARM&   args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDispatchDataGraphARM(
        const ApiCallInfo&                          call_info,
        args::CmdDispatchDataGraphARM&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDataGraphPipelineAvailablePropertiesARM(
        const ApiCallInfo&                          call_info,
        args::GetDataGraphPipelineAvailablePropertiesARM& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDataGraphPipelinePropertiesARM(
        const ApiCallInfo&                          call_info,
        args::GetDataGraphPipelinePropertiesARM&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceQueueFamilyDataGraphPropertiesARM& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetAttachmentFeedbackLoopEnableEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetAttachmentFeedbackLoopEnableEXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBindTileMemoryQCOM(
        const ApiCallInfo&                          call_info,
        args::CmdBindTileMemoryQCOM&                args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDecompressMemoryEXT(
        const ApiCallInfo&                          call_info,
        args::CmdDecompressMemoryEXT&               args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDecompressMemoryIndirectCountEXT(
        const ApiCallInfo&                          call_info,
        args::CmdDecompressMemoryIndirectCountEXT&  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPartitionedAccelerationStructuresBuildSizesNV(
        const ApiCallInfo&                          call_info,
        args::GetPartitionedAccelerationStructuresBuildSizesNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBuildPartitionedAccelerationStructuresNV(
        const ApiCallInfo&                          call_info,
        args::CmdBuildPartitionedAccelerationStructuresNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetGeneratedCommandsMemoryRequirementsEXT(
        const ApiCallInfo&                          call_info,
        args::GetGeneratedCommandsMemoryRequirementsEXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdPreprocessGeneratedCommandsEXT(
        const ApiCallInfo&                          call_info,
        args::CmdPreprocessGeneratedCommandsEXT&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdExecuteGeneratedCommandsEXT(
        const ApiCallInfo&                          call_info,
        args::CmdExecuteGeneratedCommandsEXT&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateIndirectCommandsLayoutEXT(
        const ApiCallInfo&                          call_info,
        args::CreateIndirectCommandsLayoutEXT&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyIndirectCommandsLayoutEXT(
        const ApiCallInfo&                          call_info,
        args::DestroyIndirectCommandsLayoutEXT&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateIndirectExecutionSetEXT(
        const ApiCallInfo&                          call_info,
        args::CreateIndirectExecutionSetEXT&        args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyIndirectExecutionSetEXT(
        const ApiCallInfo&                          call_info,
        args::DestroyIndirectExecutionSetEXT&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkUpdateIndirectExecutionSetPipelineEXT(
        const ApiCallInfo&                          call_info,
        args::UpdateIndirectExecutionSetPipelineEXT& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkUpdateIndirectExecutionSetShaderEXT(
        const ApiCallInfo&                          call_info,
        args::UpdateIndirectExecutionSetShaderEXT&  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetMemoryMetalHandleEXT(
        const ApiCallInfo&                          call_info,
        args::GetMemoryMetalHandleEXT&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetMemoryMetalHandlePropertiesEXT(
        const ApiCallInfo&                          call_info,
        args::GetMemoryMetalHandlePropertiesEXT&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkEnumeratePhysicalDeviceQueueFamilyPerformanceCountersByRegionARM(
        const ApiCallInfo&                          call_info,
        args::EnumeratePhysicalDeviceQueueFamilyPerformanceCountersByRegionARM& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdEndRendering2EXT(
        const ApiCallInfo&                          call_info,
        args::CmdEndRendering2EXT&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBeginCustomResolveEXT(
        const ApiCallInfo&                          call_info,
        args::CmdBeginCustomResolveEXT&             args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceQueueFamilyDataGraphOpticalFlowImageFormatsARM(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceQueueFamilyDataGraphOpticalFlowImageFormatsARM& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetPhysicalDeviceQueueFamilyDataGraphEngineOperationPropertiesARM(
        const ApiCallInfo&                          call_info,
        args::GetPhysicalDeviceQueueFamilyDataGraphEngineOperationPropertiesARM& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetComputeOccupancyPriorityNV(
        const ApiCallInfo&                          call_info,
        args::CmdSetComputeOccupancyPriorityNV&     args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetPrimitiveRestartIndexEXT(
        const ApiCallInfo&                          call_info,
        args::CmdSetPrimitiveRestartIndexEXT&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCreateAccelerationStructureKHR(
        const ApiCallInfo&                          call_info,
        args::CreateAccelerationStructureKHR&       args) override
    {
        Emit(call_info, args);
    }


    void Process_vkDestroyAccelerationStructureKHR(
        const ApiCallInfo&                          call_info,
        args::DestroyAccelerationStructureKHR&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBuildAccelerationStructuresKHR(
        const ApiCallInfo&                          call_info,
        args::CmdBuildAccelerationStructuresKHR&    args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdBuildAccelerationStructuresIndirectKHR(
        const ApiCallInfo&                          call_info,
        args::CmdBuildAccelerationStructuresIndirectKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCopyAccelerationStructureToMemoryKHR(
        const ApiCallInfo&                          call_info,
        args::CopyAccelerationStructureToMemoryKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCopyMemoryToAccelerationStructureKHR(
        const ApiCallInfo&                          call_info,
        args::CopyMemoryToAccelerationStructureKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkWriteAccelerationStructuresPropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::WriteAccelerationStructuresPropertiesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyAccelerationStructureKHR(
        const ApiCallInfo&                          call_info,
        args::CmdCopyAccelerationStructureKHR&      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyAccelerationStructureToMemoryKHR(
        const ApiCallInfo&                          call_info,
        args::CmdCopyAccelerationStructureToMemoryKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdCopyMemoryToAccelerationStructureKHR(
        const ApiCallInfo&                          call_info,
        args::CmdCopyMemoryToAccelerationStructureKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetAccelerationStructureDeviceAddressKHR(
        const ApiCallInfo&                          call_info,
        args::GetAccelerationStructureDeviceAddressKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdWriteAccelerationStructuresPropertiesKHR(
        const ApiCallInfo&                          call_info,
        args::CmdWriteAccelerationStructuresPropertiesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetDeviceAccelerationStructureCompatibilityKHR(
        const ApiCallInfo&                          call_info,
        args::GetDeviceAccelerationStructureCompatibilityKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetAccelerationStructureBuildSizesKHR(
        const ApiCallInfo&                          call_info,
        args::GetAccelerationStructureBuildSizesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdTraceRaysKHR(
        const ApiCallInfo&                          call_info,
        args::CmdTraceRaysKHR&                      args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(
        const ApiCallInfo&                          call_info,
        args::GetRayTracingCaptureReplayShaderGroupHandlesKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdTraceRaysIndirectKHR(
        const ApiCallInfo&                          call_info,
        args::CmdTraceRaysIndirectKHR&              args) override
    {
        Emit(call_info, args);
    }


    void Process_vkGetRayTracingShaderGroupStackSizeKHR(
        const ApiCallInfo&                          call_info,
        args::GetRayTracingShaderGroupStackSizeKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdSetRayTracingPipelineStackSizeKHR(
        const ApiCallInfo&                          call_info,
        args::CmdSetRayTracingPipelineStackSizeKHR& args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawMeshTasksEXT(
        const ApiCallInfo&                          call_info,
        args::CmdDrawMeshTasksEXT&                  args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawMeshTasksIndirectEXT(
        const ApiCallInfo&                          call_info,
        args::CmdDrawMeshTasksIndirectEXT&          args) override
    {
        Emit(call_info, args);
    }


    void Process_vkCmdDrawMeshTasksIndirectCountEXT(
        const ApiCallInfo&                          call_info,
        args::CmdDrawMeshTasksIndirectCountEXT&     args) override
    {
        Emit(call_info, args);
    }


    void Process(const ApiCallInfo& call_info, args::CreateInstance& args) {
        Process_vkCreateInstance(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyInstance& args) {
        Process_vkDestroyInstance(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::EnumeratePhysicalDevices& args) {
        Process_vkEnumeratePhysicalDevices(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceFeatures& args) {
        Process_vkGetPhysicalDeviceFeatures(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceFormatProperties& args) {
        Process_vkGetPhysicalDeviceFormatProperties(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceImageFormatProperties& args) {
        Process_vkGetPhysicalDeviceImageFormatProperties(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceProperties& args) {
        Process_vkGetPhysicalDeviceProperties(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceQueueFamilyProperties& args) {
        Process_vkGetPhysicalDeviceQueueFamilyProperties(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceMemoryProperties& args) {
        Process_vkGetPhysicalDeviceMemoryProperties(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateDevice& args) {
        Process_vkCreateDevice(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyDevice& args) {
        Process_vkDestroyDevice(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceQueue& args) {
        Process_vkGetDeviceQueue(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::QueueSubmit& args) {
        Process_vkQueueSubmit(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::QueueWaitIdle& args) {
        Process_vkQueueWaitIdle(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DeviceWaitIdle& args) {
        Process_vkDeviceWaitIdle(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::AllocateMemory& args) {
        Process_vkAllocateMemory(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::FreeMemory& args) {
        Process_vkFreeMemory(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::MapMemory& args) {
        Process_vkMapMemory(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::UnmapMemory& args) {
        Process_vkUnmapMemory(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::FlushMappedMemoryRanges& args) {
        Process_vkFlushMappedMemoryRanges(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::InvalidateMappedMemoryRanges& args) {
        Process_vkInvalidateMappedMemoryRanges(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceMemoryCommitment& args) {
        Process_vkGetDeviceMemoryCommitment(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::BindBufferMemory& args) {
        Process_vkBindBufferMemory(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::BindImageMemory& args) {
        Process_vkBindImageMemory(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetBufferMemoryRequirements& args) {
        Process_vkGetBufferMemoryRequirements(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageMemoryRequirements& args) {
        Process_vkGetImageMemoryRequirements(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageSparseMemoryRequirements& args) {
        Process_vkGetImageSparseMemoryRequirements(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceSparseImageFormatProperties& args) {
        Process_vkGetPhysicalDeviceSparseImageFormatProperties(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::QueueBindSparse& args) {
        Process_vkQueueBindSparse(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateFence& args) {
        Process_vkCreateFence(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyFence& args) {
        Process_vkDestroyFence(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ResetFences& args) {
        Process_vkResetFences(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetFenceStatus& args) {
        Process_vkGetFenceStatus(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::WaitForFences& args) {
        Process_vkWaitForFences(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateSemaphore& args) {
        Process_vkCreateSemaphore(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroySemaphore& args) {
        Process_vkDestroySemaphore(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateQueryPool& args) {
        Process_vkCreateQueryPool(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyQueryPool& args) {
        Process_vkDestroyQueryPool(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetQueryPoolResults& args) {
        Process_vkGetQueryPoolResults(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateBuffer& args) {
        Process_vkCreateBuffer(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyBuffer& args) {
        Process_vkDestroyBuffer(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateImage& args) {
        Process_vkCreateImage(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyImage& args) {
        Process_vkDestroyImage(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageSubresourceLayout& args) {
        Process_vkGetImageSubresourceLayout(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateImageView& args) {
        Process_vkCreateImageView(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyImageView& args) {
        Process_vkDestroyImageView(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateCommandPool& args) {
        Process_vkCreateCommandPool(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyCommandPool& args) {
        Process_vkDestroyCommandPool(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ResetCommandPool& args) {
        Process_vkResetCommandPool(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::AllocateCommandBuffers& args) {
        Process_vkAllocateCommandBuffers(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::FreeCommandBuffers& args) {
        Process_vkFreeCommandBuffers(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::BeginCommandBuffer& args) {
        Process_vkBeginCommandBuffer(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::EndCommandBuffer& args) {
        Process_vkEndCommandBuffer(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ResetCommandBuffer& args) {
        Process_vkResetCommandBuffer(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyBuffer& args) {
        Process_vkCmdCopyBuffer(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyImage& args) {
        Process_vkCmdCopyImage(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyBufferToImage& args) {
        Process_vkCmdCopyBufferToImage(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyImageToBuffer& args) {
        Process_vkCmdCopyImageToBuffer(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdUpdateBuffer& args) {
        Process_vkCmdUpdateBuffer(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdFillBuffer& args) {
        Process_vkCmdFillBuffer(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdPipelineBarrier& args) {
        Process_vkCmdPipelineBarrier(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginQuery& args) {
        Process_vkCmdBeginQuery(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndQuery& args) {
        Process_vkCmdEndQuery(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdResetQueryPool& args) {
        Process_vkCmdResetQueryPool(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdWriteTimestamp& args) {
        Process_vkCmdWriteTimestamp(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyQueryPoolResults& args) {
        Process_vkCmdCopyQueryPoolResults(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdExecuteCommands& args) {
        Process_vkCmdExecuteCommands(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateEvent& args) {
        Process_vkCreateEvent(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyEvent& args) {
        Process_vkDestroyEvent(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetEventStatus& args) {
        Process_vkGetEventStatus(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SetEvent& args) {
        Process_vkSetEvent(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ResetEvent& args) {
        Process_vkResetEvent(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateBufferView& args) {
        Process_vkCreateBufferView(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyBufferView& args) {
        Process_vkDestroyBufferView(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateShaderModule& args) {
        Process_vkCreateShaderModule(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyShaderModule& args) {
        Process_vkDestroyShaderModule(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreatePipelineCache& args) {
        Process_vkCreatePipelineCache(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyPipelineCache& args) {
        Process_vkDestroyPipelineCache(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPipelineCacheData& args) {
        Process_vkGetPipelineCacheData(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::MergePipelineCaches& args) {
        Process_vkMergePipelineCaches(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateComputePipelines& args) {
        Process_vkCreateComputePipelines(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyPipeline& args) {
        Process_vkDestroyPipeline(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreatePipelineLayout& args) {
        Process_vkCreatePipelineLayout(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyPipelineLayout& args) {
        Process_vkDestroyPipelineLayout(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateSampler& args) {
        Process_vkCreateSampler(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroySampler& args) {
        Process_vkDestroySampler(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateDescriptorSetLayout& args) {
        Process_vkCreateDescriptorSetLayout(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyDescriptorSetLayout& args) {
        Process_vkDestroyDescriptorSetLayout(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateDescriptorPool& args) {
        Process_vkCreateDescriptorPool(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyDescriptorPool& args) {
        Process_vkDestroyDescriptorPool(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ResetDescriptorPool& args) {
        Process_vkResetDescriptorPool(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::AllocateDescriptorSets& args) {
        Process_vkAllocateDescriptorSets(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::FreeDescriptorSets& args) {
        Process_vkFreeDescriptorSets(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::UpdateDescriptorSets& args) {
        Process_vkUpdateDescriptorSets(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindPipeline& args) {
        Process_vkCmdBindPipeline(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindDescriptorSets& args) {
        Process_vkCmdBindDescriptorSets(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdClearColorImage& args) {
        Process_vkCmdClearColorImage(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDispatch& args) {
        Process_vkCmdDispatch(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDispatchIndirect& args) {
        Process_vkCmdDispatchIndirect(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetEvent& args) {
        Process_vkCmdSetEvent(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdResetEvent& args) {
        Process_vkCmdResetEvent(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdWaitEvents& args) {
        Process_vkCmdWaitEvents(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdPushConstants& args) {
        Process_vkCmdPushConstants(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateGraphicsPipelines& args) {
        Process_vkCreateGraphicsPipelines(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateFramebuffer& args) {
        Process_vkCreateFramebuffer(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyFramebuffer& args) {
        Process_vkDestroyFramebuffer(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateRenderPass& args) {
        Process_vkCreateRenderPass(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyRenderPass& args) {
        Process_vkDestroyRenderPass(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetRenderAreaGranularity& args) {
        Process_vkGetRenderAreaGranularity(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetViewport& args) {
        Process_vkCmdSetViewport(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetScissor& args) {
        Process_vkCmdSetScissor(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetLineWidth& args) {
        Process_vkCmdSetLineWidth(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthBias& args) {
        Process_vkCmdSetDepthBias(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetBlendConstants& args) {
        Process_vkCmdSetBlendConstants(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthBounds& args) {
        Process_vkCmdSetDepthBounds(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetStencilCompareMask& args) {
        Process_vkCmdSetStencilCompareMask(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetStencilWriteMask& args) {
        Process_vkCmdSetStencilWriteMask(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetStencilReference& args) {
        Process_vkCmdSetStencilReference(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindIndexBuffer& args) {
        Process_vkCmdBindIndexBuffer(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindVertexBuffers& args) {
        Process_vkCmdBindVertexBuffers(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDraw& args) {
        Process_vkCmdDraw(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndexed& args) {
        Process_vkCmdDrawIndexed(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndirect& args) {
        Process_vkCmdDrawIndirect(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndexedIndirect& args) {
        Process_vkCmdDrawIndexedIndirect(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBlitImage& args) {
        Process_vkCmdBlitImage(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdClearDepthStencilImage& args) {
        Process_vkCmdClearDepthStencilImage(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdClearAttachments& args) {
        Process_vkCmdClearAttachments(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdResolveImage& args) {
        Process_vkCmdResolveImage(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginRenderPass& args) {
        Process_vkCmdBeginRenderPass(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdNextSubpass& args) {
        Process_vkCmdNextSubpass(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndRenderPass& args) {
        Process_vkCmdEndRenderPass(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::BindBufferMemory2& args) {
        Process_vkBindBufferMemory2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::BindImageMemory2& args) {
        Process_vkBindImageMemory2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceGroupPeerMemoryFeatures& args) {
        Process_vkGetDeviceGroupPeerMemoryFeatures(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDeviceMask& args) {
        Process_vkCmdSetDeviceMask(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::EnumeratePhysicalDeviceGroups& args) {
        Process_vkEnumeratePhysicalDeviceGroups(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageMemoryRequirements2& args) {
        Process_vkGetImageMemoryRequirements2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetBufferMemoryRequirements2& args) {
        Process_vkGetBufferMemoryRequirements2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageSparseMemoryRequirements2& args) {
        Process_vkGetImageSparseMemoryRequirements2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceFeatures2& args) {
        Process_vkGetPhysicalDeviceFeatures2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceProperties2& args) {
        Process_vkGetPhysicalDeviceProperties2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceFormatProperties2& args) {
        Process_vkGetPhysicalDeviceFormatProperties2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceImageFormatProperties2& args) {
        Process_vkGetPhysicalDeviceImageFormatProperties2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceQueueFamilyProperties2& args) {
        Process_vkGetPhysicalDeviceQueueFamilyProperties2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceMemoryProperties2& args) {
        Process_vkGetPhysicalDeviceMemoryProperties2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceSparseImageFormatProperties2& args) {
        Process_vkGetPhysicalDeviceSparseImageFormatProperties2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::TrimCommandPool& args) {
        Process_vkTrimCommandPool(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceQueue2& args) {
        Process_vkGetDeviceQueue2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceExternalBufferProperties& args) {
        Process_vkGetPhysicalDeviceExternalBufferProperties(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceExternalFenceProperties& args) {
        Process_vkGetPhysicalDeviceExternalFenceProperties(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceExternalSemaphoreProperties& args) {
        Process_vkGetPhysicalDeviceExternalSemaphoreProperties(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDispatchBase& args) {
        Process_vkCmdDispatchBase(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateDescriptorUpdateTemplate& args) {
        Process_vkCreateDescriptorUpdateTemplate(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyDescriptorUpdateTemplate& args) {
        Process_vkDestroyDescriptorUpdateTemplate(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDescriptorSetLayoutSupport& args) {
        Process_vkGetDescriptorSetLayoutSupport(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateSamplerYcbcrConversion& args) {
        Process_vkCreateSamplerYcbcrConversion(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroySamplerYcbcrConversion& args) {
        Process_vkDestroySamplerYcbcrConversion(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ResetQueryPool& args) {
        Process_vkResetQueryPool(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetSemaphoreCounterValue& args) {
        Process_vkGetSemaphoreCounterValue(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::WaitSemaphores& args) {
        Process_vkWaitSemaphores(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SignalSemaphore& args) {
        Process_vkSignalSemaphore(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetBufferDeviceAddress& args) {
        Process_vkGetBufferDeviceAddress(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetBufferOpaqueCaptureAddress& args) {
        Process_vkGetBufferOpaqueCaptureAddress(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceMemoryOpaqueCaptureAddress& args) {
        Process_vkGetDeviceMemoryOpaqueCaptureAddress(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndirectCount& args) {
        Process_vkCmdDrawIndirectCount(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndexedIndirectCount& args) {
        Process_vkCmdDrawIndexedIndirectCount(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateRenderPass2& args) {
        Process_vkCreateRenderPass2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginRenderPass2& args) {
        Process_vkCmdBeginRenderPass2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdNextSubpass2& args) {
        Process_vkCmdNextSubpass2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndRenderPass2& args) {
        Process_vkCmdEndRenderPass2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceToolProperties& args) {
        Process_vkGetPhysicalDeviceToolProperties(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreatePrivateDataSlot& args) {
        Process_vkCreatePrivateDataSlot(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyPrivateDataSlot& args) {
        Process_vkDestroyPrivateDataSlot(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SetPrivateData& args) {
        Process_vkSetPrivateData(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPrivateData& args) {
        Process_vkGetPrivateData(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdPipelineBarrier2& args) {
        Process_vkCmdPipelineBarrier2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdWriteTimestamp2& args) {
        Process_vkCmdWriteTimestamp2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::QueueSubmit2& args) {
        Process_vkQueueSubmit2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyBuffer2& args) {
        Process_vkCmdCopyBuffer2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyImage2& args) {
        Process_vkCmdCopyImage2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyBufferToImage2& args) {
        Process_vkCmdCopyBufferToImage2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyImageToBuffer2& args) {
        Process_vkCmdCopyImageToBuffer2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceBufferMemoryRequirements& args) {
        Process_vkGetDeviceBufferMemoryRequirements(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceImageMemoryRequirements& args) {
        Process_vkGetDeviceImageMemoryRequirements(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceImageSparseMemoryRequirements& args) {
        Process_vkGetDeviceImageSparseMemoryRequirements(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetEvent2& args) {
        Process_vkCmdSetEvent2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdResetEvent2& args) {
        Process_vkCmdResetEvent2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdWaitEvents2& args) {
        Process_vkCmdWaitEvents2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBlitImage2& args) {
        Process_vkCmdBlitImage2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdResolveImage2& args) {
        Process_vkCmdResolveImage2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginRendering& args) {
        Process_vkCmdBeginRendering(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndRendering& args) {
        Process_vkCmdEndRendering(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetCullMode& args) {
        Process_vkCmdSetCullMode(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetFrontFace& args) {
        Process_vkCmdSetFrontFace(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetPrimitiveTopology& args) {
        Process_vkCmdSetPrimitiveTopology(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetViewportWithCount& args) {
        Process_vkCmdSetViewportWithCount(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetScissorWithCount& args) {
        Process_vkCmdSetScissorWithCount(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindVertexBuffers2& args) {
        Process_vkCmdBindVertexBuffers2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthTestEnable& args) {
        Process_vkCmdSetDepthTestEnable(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthWriteEnable& args) {
        Process_vkCmdSetDepthWriteEnable(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthCompareOp& args) {
        Process_vkCmdSetDepthCompareOp(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthBoundsTestEnable& args) {
        Process_vkCmdSetDepthBoundsTestEnable(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetStencilTestEnable& args) {
        Process_vkCmdSetStencilTestEnable(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetStencilOp& args) {
        Process_vkCmdSetStencilOp(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetRasterizerDiscardEnable& args) {
        Process_vkCmdSetRasterizerDiscardEnable(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthBiasEnable& args) {
        Process_vkCmdSetDepthBiasEnable(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetPrimitiveRestartEnable& args) {
        Process_vkCmdSetPrimitiveRestartEnable(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::MapMemory2& args) {
        Process_vkMapMemory2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::UnmapMemory2& args) {
        Process_vkUnmapMemory2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceImageSubresourceLayout& args) {
        Process_vkGetDeviceImageSubresourceLayout(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageSubresourceLayout2& args) {
        Process_vkGetImageSubresourceLayout2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CopyMemoryToImage& args) {
        Process_vkCopyMemoryToImage(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CopyImageToMemory& args) {
        Process_vkCopyImageToMemory(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CopyImageToImage& args) {
        Process_vkCopyImageToImage(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::TransitionImageLayout& args) {
        Process_vkTransitionImageLayout(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdPushDescriptorSet& args) {
        Process_vkCmdPushDescriptorSet(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindDescriptorSets2& args) {
        Process_vkCmdBindDescriptorSets2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdPushConstants2& args) {
        Process_vkCmdPushConstants2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdPushDescriptorSet2& args) {
        Process_vkCmdPushDescriptorSet2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetLineStipple& args) {
        Process_vkCmdSetLineStipple(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindIndexBuffer2& args) {
        Process_vkCmdBindIndexBuffer2(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetRenderingAreaGranularity& args) {
        Process_vkGetRenderingAreaGranularity(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetRenderingAttachmentLocations& args) {
        Process_vkCmdSetRenderingAttachmentLocations(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetRenderingInputAttachmentIndices& args) {
        Process_vkCmdSetRenderingInputAttachmentIndices(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroySurfaceKHR& args) {
        Process_vkDestroySurfaceKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceSurfaceSupportKHR& args) {
        Process_vkGetPhysicalDeviceSurfaceSupportKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceSurfaceCapabilitiesKHR& args) {
        Process_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceSurfaceFormatsKHR& args) {
        Process_vkGetPhysicalDeviceSurfaceFormatsKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceSurfacePresentModesKHR& args) {
        Process_vkGetPhysicalDeviceSurfacePresentModesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateSwapchainKHR& args) {
        Process_vkCreateSwapchainKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroySwapchainKHR& args) {
        Process_vkDestroySwapchainKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetSwapchainImagesKHR& args) {
        Process_vkGetSwapchainImagesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::AcquireNextImageKHR& args) {
        Process_vkAcquireNextImageKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::QueuePresentKHR& args) {
        Process_vkQueuePresentKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceGroupPresentCapabilitiesKHR& args) {
        Process_vkGetDeviceGroupPresentCapabilitiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceGroupSurfacePresentModesKHR& args) {
        Process_vkGetDeviceGroupSurfacePresentModesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDevicePresentRectanglesKHR& args) {
        Process_vkGetPhysicalDevicePresentRectanglesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::AcquireNextImage2KHR& args) {
        Process_vkAcquireNextImage2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceDisplayPropertiesKHR& args) {
        Process_vkGetPhysicalDeviceDisplayPropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceDisplayPlanePropertiesKHR& args) {
        Process_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDisplayPlaneSupportedDisplaysKHR& args) {
        Process_vkGetDisplayPlaneSupportedDisplaysKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDisplayModePropertiesKHR& args) {
        Process_vkGetDisplayModePropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateDisplayModeKHR& args) {
        Process_vkCreateDisplayModeKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDisplayPlaneCapabilitiesKHR& args) {
        Process_vkGetDisplayPlaneCapabilitiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateDisplayPlaneSurfaceKHR& args) {
        Process_vkCreateDisplayPlaneSurfaceKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateSharedSwapchainsKHR& args) {
        Process_vkCreateSharedSwapchainsKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateXlibSurfaceKHR& args) {
        Process_vkCreateXlibSurfaceKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceXlibPresentationSupportKHR& args) {
        Process_vkGetPhysicalDeviceXlibPresentationSupportKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateXcbSurfaceKHR& args) {
        Process_vkCreateXcbSurfaceKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceXcbPresentationSupportKHR& args) {
        Process_vkGetPhysicalDeviceXcbPresentationSupportKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateWaylandSurfaceKHR& args) {
        Process_vkCreateWaylandSurfaceKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceWaylandPresentationSupportKHR& args) {
        Process_vkGetPhysicalDeviceWaylandPresentationSupportKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateAndroidSurfaceKHR& args) {
        Process_vkCreateAndroidSurfaceKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateWin32SurfaceKHR& args) {
        Process_vkCreateWin32SurfaceKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceWin32PresentationSupportKHR& args) {
        Process_vkGetPhysicalDeviceWin32PresentationSupportKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceVideoCapabilitiesKHR& args) {
        Process_vkGetPhysicalDeviceVideoCapabilitiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceVideoFormatPropertiesKHR& args) {
        Process_vkGetPhysicalDeviceVideoFormatPropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateVideoSessionKHR& args) {
        Process_vkCreateVideoSessionKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyVideoSessionKHR& args) {
        Process_vkDestroyVideoSessionKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetVideoSessionMemoryRequirementsKHR& args) {
        Process_vkGetVideoSessionMemoryRequirementsKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::BindVideoSessionMemoryKHR& args) {
        Process_vkBindVideoSessionMemoryKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateVideoSessionParametersKHR& args) {
        Process_vkCreateVideoSessionParametersKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::UpdateVideoSessionParametersKHR& args) {
        Process_vkUpdateVideoSessionParametersKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyVideoSessionParametersKHR& args) {
        Process_vkDestroyVideoSessionParametersKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginVideoCodingKHR& args) {
        Process_vkCmdBeginVideoCodingKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndVideoCodingKHR& args) {
        Process_vkCmdEndVideoCodingKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdControlVideoCodingKHR& args) {
        Process_vkCmdControlVideoCodingKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDecodeVideoKHR& args) {
        Process_vkCmdDecodeVideoKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginRenderingKHR& args) {
        Process_vkCmdBeginRenderingKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndRenderingKHR& args) {
        Process_vkCmdEndRenderingKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceFeatures2KHR& args) {
        Process_vkGetPhysicalDeviceFeatures2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceProperties2KHR& args) {
        Process_vkGetPhysicalDeviceProperties2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceFormatProperties2KHR& args) {
        Process_vkGetPhysicalDeviceFormatProperties2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceImageFormatProperties2KHR& args) {
        Process_vkGetPhysicalDeviceImageFormatProperties2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceQueueFamilyProperties2KHR& args) {
        Process_vkGetPhysicalDeviceQueueFamilyProperties2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceMemoryProperties2KHR& args) {
        Process_vkGetPhysicalDeviceMemoryProperties2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceSparseImageFormatProperties2KHR& args) {
        Process_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceGroupPeerMemoryFeaturesKHR& args) {
        Process_vkGetDeviceGroupPeerMemoryFeaturesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDeviceMaskKHR& args) {
        Process_vkCmdSetDeviceMaskKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDispatchBaseKHR& args) {
        Process_vkCmdDispatchBaseKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::TrimCommandPoolKHR& args) {
        Process_vkTrimCommandPoolKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::EnumeratePhysicalDeviceGroupsKHR& args) {
        Process_vkEnumeratePhysicalDeviceGroupsKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceExternalBufferPropertiesKHR& args) {
        Process_vkGetPhysicalDeviceExternalBufferPropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetMemoryWin32HandleKHR& args) {
        Process_vkGetMemoryWin32HandleKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetMemoryWin32HandlePropertiesKHR& args) {
        Process_vkGetMemoryWin32HandlePropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetMemoryFdKHR& args) {
        Process_vkGetMemoryFdKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetMemoryFdPropertiesKHR& args) {
        Process_vkGetMemoryFdPropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceExternalSemaphorePropertiesKHR& args) {
        Process_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ImportSemaphoreWin32HandleKHR& args) {
        Process_vkImportSemaphoreWin32HandleKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetSemaphoreWin32HandleKHR& args) {
        Process_vkGetSemaphoreWin32HandleKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ImportSemaphoreFdKHR& args) {
        Process_vkImportSemaphoreFdKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetSemaphoreFdKHR& args) {
        Process_vkGetSemaphoreFdKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdPushDescriptorSetKHR& args) {
        Process_vkCmdPushDescriptorSetKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateDescriptorUpdateTemplateKHR& args) {
        Process_vkCreateDescriptorUpdateTemplateKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyDescriptorUpdateTemplateKHR& args) {
        Process_vkDestroyDescriptorUpdateTemplateKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateRenderPass2KHR& args) {
        Process_vkCreateRenderPass2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginRenderPass2KHR& args) {
        Process_vkCmdBeginRenderPass2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdNextSubpass2KHR& args) {
        Process_vkCmdNextSubpass2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndRenderPass2KHR& args) {
        Process_vkCmdEndRenderPass2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetSwapchainStatusKHR& args) {
        Process_vkGetSwapchainStatusKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceExternalFencePropertiesKHR& args) {
        Process_vkGetPhysicalDeviceExternalFencePropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ImportFenceWin32HandleKHR& args) {
        Process_vkImportFenceWin32HandleKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetFenceWin32HandleKHR& args) {
        Process_vkGetFenceWin32HandleKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ImportFenceFdKHR& args) {
        Process_vkImportFenceFdKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetFenceFdKHR& args) {
        Process_vkGetFenceFdKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR& args) {
        Process_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR& args) {
        Process_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::AcquireProfilingLockKHR& args) {
        Process_vkAcquireProfilingLockKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ReleaseProfilingLockKHR& args) {
        Process_vkReleaseProfilingLockKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceSurfaceCapabilities2KHR& args) {
        Process_vkGetPhysicalDeviceSurfaceCapabilities2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceSurfaceFormats2KHR& args) {
        Process_vkGetPhysicalDeviceSurfaceFormats2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceDisplayProperties2KHR& args) {
        Process_vkGetPhysicalDeviceDisplayProperties2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceDisplayPlaneProperties2KHR& args) {
        Process_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDisplayModeProperties2KHR& args) {
        Process_vkGetDisplayModeProperties2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDisplayPlaneCapabilities2KHR& args) {
        Process_vkGetDisplayPlaneCapabilities2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageMemoryRequirements2KHR& args) {
        Process_vkGetImageMemoryRequirements2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetBufferMemoryRequirements2KHR& args) {
        Process_vkGetBufferMemoryRequirements2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageSparseMemoryRequirements2KHR& args) {
        Process_vkGetImageSparseMemoryRequirements2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateSamplerYcbcrConversionKHR& args) {
        Process_vkCreateSamplerYcbcrConversionKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroySamplerYcbcrConversionKHR& args) {
        Process_vkDestroySamplerYcbcrConversionKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::BindBufferMemory2KHR& args) {
        Process_vkBindBufferMemory2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::BindImageMemory2KHR& args) {
        Process_vkBindImageMemory2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDescriptorSetLayoutSupportKHR& args) {
        Process_vkGetDescriptorSetLayoutSupportKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndirectCountKHR& args) {
        Process_vkCmdDrawIndirectCountKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndexedIndirectCountKHR& args) {
        Process_vkCmdDrawIndexedIndirectCountKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetSemaphoreCounterValueKHR& args) {
        Process_vkGetSemaphoreCounterValueKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::WaitSemaphoresKHR& args) {
        Process_vkWaitSemaphoresKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SignalSemaphoreKHR& args) {
        Process_vkSignalSemaphoreKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceFragmentShadingRatesKHR& args) {
        Process_vkGetPhysicalDeviceFragmentShadingRatesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetFragmentShadingRateKHR& args) {
        Process_vkCmdSetFragmentShadingRateKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetRenderingAttachmentLocationsKHR& args) {
        Process_vkCmdSetRenderingAttachmentLocationsKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetRenderingInputAttachmentIndicesKHR& args) {
        Process_vkCmdSetRenderingInputAttachmentIndicesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::WaitForPresentKHR& args) {
        Process_vkWaitForPresentKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetBufferDeviceAddressKHR& args) {
        Process_vkGetBufferDeviceAddressKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetBufferOpaqueCaptureAddressKHR& args) {
        Process_vkGetBufferOpaqueCaptureAddressKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceMemoryOpaqueCaptureAddressKHR& args) {
        Process_vkGetDeviceMemoryOpaqueCaptureAddressKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateDeferredOperationKHR& args) {
        Process_vkCreateDeferredOperationKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyDeferredOperationKHR& args) {
        Process_vkDestroyDeferredOperationKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeferredOperationMaxConcurrencyKHR& args) {
        Process_vkGetDeferredOperationMaxConcurrencyKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeferredOperationResultKHR& args) {
        Process_vkGetDeferredOperationResultKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DeferredOperationJoinKHR& args) {
        Process_vkDeferredOperationJoinKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPipelineExecutablePropertiesKHR& args) {
        Process_vkGetPipelineExecutablePropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPipelineExecutableStatisticsKHR& args) {
        Process_vkGetPipelineExecutableStatisticsKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPipelineExecutableInternalRepresentationsKHR& args) {
        Process_vkGetPipelineExecutableInternalRepresentationsKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::MapMemory2KHR& args) {
        Process_vkMapMemory2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::UnmapMemory2KHR& args) {
        Process_vkUnmapMemory2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR& args) {
        Process_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetEncodedVideoSessionParametersKHR& args) {
        Process_vkGetEncodedVideoSessionParametersKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEncodeVideoKHR& args) {
        Process_vkCmdEncodeVideoKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetEvent2KHR& args) {
        Process_vkCmdSetEvent2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdResetEvent2KHR& args) {
        Process_vkCmdResetEvent2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdWaitEvents2KHR& args) {
        Process_vkCmdWaitEvents2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdPipelineBarrier2KHR& args) {
        Process_vkCmdPipelineBarrier2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdWriteTimestamp2KHR& args) {
        Process_vkCmdWriteTimestamp2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::QueueSubmit2KHR& args) {
        Process_vkQueueSubmit2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindIndexBuffer3KHR& args) {
        Process_vkCmdBindIndexBuffer3KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindVertexBuffers3KHR& args) {
        Process_vkCmdBindVertexBuffers3KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndirect2KHR& args) {
        Process_vkCmdDrawIndirect2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndexedIndirect2KHR& args) {
        Process_vkCmdDrawIndexedIndirect2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDispatchIndirect2KHR& args) {
        Process_vkCmdDispatchIndirect2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyMemoryKHR& args) {
        Process_vkCmdCopyMemoryKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyMemoryToImageKHR& args) {
        Process_vkCmdCopyMemoryToImageKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyImageToMemoryKHR& args) {
        Process_vkCmdCopyImageToMemoryKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdUpdateMemoryKHR& args) {
        Process_vkCmdUpdateMemoryKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdFillMemoryKHR& args) {
        Process_vkCmdFillMemoryKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyQueryPoolResultsToMemoryKHR& args) {
        Process_vkCmdCopyQueryPoolResultsToMemoryKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndirectCount2KHR& args) {
        Process_vkCmdDrawIndirectCount2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndexedIndirectCount2KHR& args) {
        Process_vkCmdDrawIndexedIndirectCount2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginConditionalRendering2EXT& args) {
        Process_vkCmdBeginConditionalRendering2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindTransformFeedbackBuffers2EXT& args) {
        Process_vkCmdBindTransformFeedbackBuffers2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginTransformFeedback2EXT& args) {
        Process_vkCmdBeginTransformFeedback2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndTransformFeedback2EXT& args) {
        Process_vkCmdEndTransformFeedback2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndirectByteCount2EXT& args) {
        Process_vkCmdDrawIndirectByteCount2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawMeshTasksIndirect2EXT& args) {
        Process_vkCmdDrawMeshTasksIndirect2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawMeshTasksIndirectCount2EXT& args) {
        Process_vkCmdDrawMeshTasksIndirectCount2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdWriteMarkerToMemoryAMD& args) {
        Process_vkCmdWriteMarkerToMemoryAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateAccelerationStructure2KHR& args) {
        Process_vkCreateAccelerationStructure2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyBuffer2KHR& args) {
        Process_vkCmdCopyBuffer2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyImage2KHR& args) {
        Process_vkCmdCopyImage2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyBufferToImage2KHR& args) {
        Process_vkCmdCopyBufferToImage2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyImageToBuffer2KHR& args) {
        Process_vkCmdCopyImageToBuffer2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBlitImage2KHR& args) {
        Process_vkCmdBlitImage2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdResolveImage2KHR& args) {
        Process_vkCmdResolveImage2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdTraceRaysIndirect2KHR& args) {
        Process_vkCmdTraceRaysIndirect2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceBufferMemoryRequirementsKHR& args) {
        Process_vkGetDeviceBufferMemoryRequirementsKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceImageMemoryRequirementsKHR& args) {
        Process_vkGetDeviceImageMemoryRequirementsKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceImageSparseMemoryRequirementsKHR& args) {
        Process_vkGetDeviceImageSparseMemoryRequirementsKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindIndexBuffer2KHR& args) {
        Process_vkCmdBindIndexBuffer2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetRenderingAreaGranularityKHR& args) {
        Process_vkGetRenderingAreaGranularityKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceImageSubresourceLayoutKHR& args) {
        Process_vkGetDeviceImageSubresourceLayoutKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageSubresourceLayout2KHR& args) {
        Process_vkGetImageSubresourceLayout2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::WaitForPresent2KHR& args) {
        Process_vkWaitForPresent2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreatePipelineBinariesKHR& args) {
        Process_vkCreatePipelineBinariesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyPipelineBinaryKHR& args) {
        Process_vkDestroyPipelineBinaryKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPipelineKeyKHR& args) {
        Process_vkGetPipelineKeyKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPipelineBinaryDataKHR& args) {
        Process_vkGetPipelineBinaryDataKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ReleaseCapturedPipelineDataKHR& args) {
        Process_vkReleaseCapturedPipelineDataKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ReleaseSwapchainImagesKHR& args) {
        Process_vkReleaseSwapchainImagesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceCooperativeMatrixPropertiesKHR& args) {
        Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetLineStippleKHR& args) {
        Process_vkCmdSetLineStippleKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceCalibrateableTimeDomainsKHR& args) {
        Process_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetCalibratedTimestampsKHR& args) {
        Process_vkGetCalibratedTimestampsKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindDescriptorSets2KHR& args) {
        Process_vkCmdBindDescriptorSets2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdPushConstants2KHR& args) {
        Process_vkCmdPushConstants2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdPushDescriptorSet2KHR& args) {
        Process_vkCmdPushDescriptorSet2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDescriptorBufferOffsets2EXT& args) {
        Process_vkCmdSetDescriptorBufferOffsets2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindDescriptorBufferEmbeddedSamplers2EXT& args) {
        Process_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyMemoryIndirectKHR& args) {
        Process_vkCmdCopyMemoryIndirectKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyMemoryToImageIndirectKHR& args) {
        Process_vkCmdCopyMemoryToImageIndirectKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceFaultReportsKHR& args) {
        Process_vkGetDeviceFaultReportsKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceFaultDebugInfoKHR& args) {
        Process_vkGetDeviceFaultDebugInfoKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndRendering2KHR& args) {
        Process_vkCmdEndRendering2KHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::FrameBoundaryANDROID& args) {
        Process_vkFrameBoundaryANDROID(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateDebugReportCallbackEXT& args) {
        Process_vkCreateDebugReportCallbackEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyDebugReportCallbackEXT& args) {
        Process_vkDestroyDebugReportCallbackEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DebugReportMessageEXT& args) {
        Process_vkDebugReportMessageEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DebugMarkerSetObjectTagEXT& args) {
        Process_vkDebugMarkerSetObjectTagEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DebugMarkerSetObjectNameEXT& args) {
        Process_vkDebugMarkerSetObjectNameEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDebugMarkerBeginEXT& args) {
        Process_vkCmdDebugMarkerBeginEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDebugMarkerEndEXT& args) {
        Process_vkCmdDebugMarkerEndEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDebugMarkerInsertEXT& args) {
        Process_vkCmdDebugMarkerInsertEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindTransformFeedbackBuffersEXT& args) {
        Process_vkCmdBindTransformFeedbackBuffersEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginTransformFeedbackEXT& args) {
        Process_vkCmdBeginTransformFeedbackEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndTransformFeedbackEXT& args) {
        Process_vkCmdEndTransformFeedbackEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginQueryIndexedEXT& args) {
        Process_vkCmdBeginQueryIndexedEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndQueryIndexedEXT& args) {
        Process_vkCmdEndQueryIndexedEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndirectByteCountEXT& args) {
        Process_vkCmdDrawIndirectByteCountEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageViewHandleNVX& args) {
        Process_vkGetImageViewHandleNVX(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageViewHandle64NVX& args) {
        Process_vkGetImageViewHandle64NVX(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageViewAddressNVX& args) {
        Process_vkGetImageViewAddressNVX(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceCombinedImageSamplerIndexNVX& args) {
        Process_vkGetDeviceCombinedImageSamplerIndexNVX(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndirectCountAMD& args) {
        Process_vkCmdDrawIndirectCountAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawIndexedIndirectCountAMD& args) {
        Process_vkCmdDrawIndexedIndirectCountAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetShaderInfoAMD& args) {
        Process_vkGetShaderInfoAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateStreamDescriptorSurfaceGGP& args) {
        Process_vkCreateStreamDescriptorSurfaceGGP(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceExternalImageFormatPropertiesNV& args) {
        Process_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetMemoryWin32HandleNV& args) {
        Process_vkGetMemoryWin32HandleNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateViSurfaceNN& args) {
        Process_vkCreateViSurfaceNN(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginConditionalRenderingEXT& args) {
        Process_vkCmdBeginConditionalRenderingEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndConditionalRenderingEXT& args) {
        Process_vkCmdEndConditionalRenderingEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetViewportWScalingNV& args) {
        Process_vkCmdSetViewportWScalingNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ReleaseDisplayEXT& args) {
        Process_vkReleaseDisplayEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::AcquireXlibDisplayEXT& args) {
        Process_vkAcquireXlibDisplayEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetRandROutputDisplayEXT& args) {
        Process_vkGetRandROutputDisplayEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceSurfaceCapabilities2EXT& args) {
        Process_vkGetPhysicalDeviceSurfaceCapabilities2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DisplayPowerControlEXT& args) {
        Process_vkDisplayPowerControlEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::RegisterDeviceEventEXT& args) {
        Process_vkRegisterDeviceEventEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::RegisterDisplayEventEXT& args) {
        Process_vkRegisterDisplayEventEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetSwapchainCounterEXT& args) {
        Process_vkGetSwapchainCounterEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetRefreshCycleDurationGOOGLE& args) {
        Process_vkGetRefreshCycleDurationGOOGLE(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPastPresentationTimingGOOGLE& args) {
        Process_vkGetPastPresentationTimingGOOGLE(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDiscardRectangleEXT& args) {
        Process_vkCmdSetDiscardRectangleEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDiscardRectangleEnableEXT& args) {
        Process_vkCmdSetDiscardRectangleEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDiscardRectangleModeEXT& args) {
        Process_vkCmdSetDiscardRectangleModeEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SetHdrMetadataEXT& args) {
        Process_vkSetHdrMetadataEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateIOSSurfaceMVK& args) {
        Process_vkCreateIOSSurfaceMVK(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateMacOSSurfaceMVK& args) {
        Process_vkCreateMacOSSurfaceMVK(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SetDebugUtilsObjectNameEXT& args) {
        Process_vkSetDebugUtilsObjectNameEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SetDebugUtilsObjectTagEXT& args) {
        Process_vkSetDebugUtilsObjectTagEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::QueueBeginDebugUtilsLabelEXT& args) {
        Process_vkQueueBeginDebugUtilsLabelEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::QueueEndDebugUtilsLabelEXT& args) {
        Process_vkQueueEndDebugUtilsLabelEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::QueueInsertDebugUtilsLabelEXT& args) {
        Process_vkQueueInsertDebugUtilsLabelEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginDebugUtilsLabelEXT& args) {
        Process_vkCmdBeginDebugUtilsLabelEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndDebugUtilsLabelEXT& args) {
        Process_vkCmdEndDebugUtilsLabelEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdInsertDebugUtilsLabelEXT& args) {
        Process_vkCmdInsertDebugUtilsLabelEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateDebugUtilsMessengerEXT& args) {
        Process_vkCreateDebugUtilsMessengerEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyDebugUtilsMessengerEXT& args) {
        Process_vkDestroyDebugUtilsMessengerEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SubmitDebugUtilsMessageEXT& args) {
        Process_vkSubmitDebugUtilsMessageEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetAndroidHardwareBufferPropertiesANDROID& args) {
        Process_vkGetAndroidHardwareBufferPropertiesANDROID(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetMemoryAndroidHardwareBufferANDROID& args) {
        Process_vkGetMemoryAndroidHardwareBufferANDROID(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateGpaSessionAMD& args) {
        Process_vkCreateGpaSessionAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyGpaSessionAMD& args) {
        Process_vkDestroyGpaSessionAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SetGpaDeviceClockModeAMD& args) {
        Process_vkSetGpaDeviceClockModeAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetGpaDeviceClockInfoAMD& args) {
        Process_vkGetGpaDeviceClockInfoAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginGpaSessionAMD& args) {
        Process_vkCmdBeginGpaSessionAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndGpaSessionAMD& args) {
        Process_vkCmdEndGpaSessionAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginGpaSampleAMD& args) {
        Process_vkCmdBeginGpaSampleAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndGpaSampleAMD& args) {
        Process_vkCmdEndGpaSampleAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetGpaSessionStatusAMD& args) {
        Process_vkGetGpaSessionStatusAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetGpaSessionResultsAMD& args) {
        Process_vkGetGpaSessionResultsAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ResetGpaSessionAMD& args) {
        Process_vkResetGpaSessionAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyGpaSessionResultsAMD& args) {
        Process_vkCmdCopyGpaSessionResultsAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetSampleLocationsEXT& args) {
        Process_vkCmdSetSampleLocationsEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceMultisamplePropertiesEXT& args) {
        Process_vkGetPhysicalDeviceMultisamplePropertiesEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageDrmFormatModifierPropertiesEXT& args) {
        Process_vkGetImageDrmFormatModifierPropertiesEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateValidationCacheEXT& args) {
        Process_vkCreateValidationCacheEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyValidationCacheEXT& args) {
        Process_vkDestroyValidationCacheEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::MergeValidationCachesEXT& args) {
        Process_vkMergeValidationCachesEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetValidationCacheDataEXT& args) {
        Process_vkGetValidationCacheDataEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindShadingRateImageNV& args) {
        Process_vkCmdBindShadingRateImageNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetViewportShadingRatePaletteNV& args) {
        Process_vkCmdSetViewportShadingRatePaletteNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetCoarseSampleOrderNV& args) {
        Process_vkCmdSetCoarseSampleOrderNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateAccelerationStructureNV& args) {
        Process_vkCreateAccelerationStructureNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyAccelerationStructureNV& args) {
        Process_vkDestroyAccelerationStructureNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetAccelerationStructureMemoryRequirementsNV& args) {
        Process_vkGetAccelerationStructureMemoryRequirementsNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::BindAccelerationStructureMemoryNV& args) {
        Process_vkBindAccelerationStructureMemoryNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBuildAccelerationStructureNV& args) {
        Process_vkCmdBuildAccelerationStructureNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyAccelerationStructureNV& args) {
        Process_vkCmdCopyAccelerationStructureNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdTraceRaysNV& args) {
        Process_vkCmdTraceRaysNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateRayTracingPipelinesNV& args) {
        Process_vkCreateRayTracingPipelinesNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetRayTracingShaderGroupHandlesKHR& args) {
        Process_vkGetRayTracingShaderGroupHandlesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetRayTracingShaderGroupHandlesNV& args) {
        Process_vkGetRayTracingShaderGroupHandlesNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetAccelerationStructureHandleNV& args) {
        Process_vkGetAccelerationStructureHandleNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdWriteAccelerationStructuresPropertiesNV& args) {
        Process_vkCmdWriteAccelerationStructuresPropertiesNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CompileDeferredNV& args) {
        Process_vkCompileDeferredNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetMemoryHostPointerPropertiesEXT& args) {
        Process_vkGetMemoryHostPointerPropertiesEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdWriteBufferMarkerAMD& args) {
        Process_vkCmdWriteBufferMarkerAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdWriteBufferMarker2AMD& args) {
        Process_vkCmdWriteBufferMarker2AMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceCalibrateableTimeDomainsEXT& args) {
        Process_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetCalibratedTimestampsEXT& args) {
        Process_vkGetCalibratedTimestampsEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawMeshTasksNV& args) {
        Process_vkCmdDrawMeshTasksNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawMeshTasksIndirectNV& args) {
        Process_vkCmdDrawMeshTasksIndirectNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawMeshTasksIndirectCountNV& args) {
        Process_vkCmdDrawMeshTasksIndirectCountNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetExclusiveScissorEnableNV& args) {
        Process_vkCmdSetExclusiveScissorEnableNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetExclusiveScissorNV& args) {
        Process_vkCmdSetExclusiveScissorNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetCheckpointNV& args) {
        Process_vkCmdSetCheckpointNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetQueueCheckpointDataNV& args) {
        Process_vkGetQueueCheckpointDataNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetQueueCheckpointData2NV& args) {
        Process_vkGetQueueCheckpointData2NV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SetSwapchainPresentTimingQueueSizeEXT& args) {
        Process_vkSetSwapchainPresentTimingQueueSizeEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetSwapchainTimingPropertiesEXT& args) {
        Process_vkGetSwapchainTimingPropertiesEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetSwapchainTimeDomainPropertiesEXT& args) {
        Process_vkGetSwapchainTimeDomainPropertiesEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPastPresentationTimingEXT& args) {
        Process_vkGetPastPresentationTimingEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::InitializePerformanceApiINTEL& args) {
        Process_vkInitializePerformanceApiINTEL(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::UninitializePerformanceApiINTEL& args) {
        Process_vkUninitializePerformanceApiINTEL(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetPerformanceMarkerINTEL& args) {
        Process_vkCmdSetPerformanceMarkerINTEL(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetPerformanceStreamMarkerINTEL& args) {
        Process_vkCmdSetPerformanceStreamMarkerINTEL(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetPerformanceOverrideINTEL& args) {
        Process_vkCmdSetPerformanceOverrideINTEL(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::AcquirePerformanceConfigurationINTEL& args) {
        Process_vkAcquirePerformanceConfigurationINTEL(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ReleasePerformanceConfigurationINTEL& args) {
        Process_vkReleasePerformanceConfigurationINTEL(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::QueueSetPerformanceConfigurationINTEL& args) {
        Process_vkQueueSetPerformanceConfigurationINTEL(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPerformanceParameterINTEL& args) {
        Process_vkGetPerformanceParameterINTEL(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SetLocalDimmingAMD& args) {
        Process_vkSetLocalDimmingAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateImagePipeSurfaceFUCHSIA& args) {
        Process_vkCreateImagePipeSurfaceFUCHSIA(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateMetalSurfaceEXT& args) {
        Process_vkCreateMetalSurfaceEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetBufferDeviceAddressEXT& args) {
        Process_vkGetBufferDeviceAddressEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceToolPropertiesEXT& args) {
        Process_vkGetPhysicalDeviceToolPropertiesEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceCooperativeMatrixPropertiesNV& args) {
        Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV& args) {
        Process_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceSurfacePresentModes2EXT& args) {
        Process_vkGetPhysicalDeviceSurfacePresentModes2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::AcquireFullScreenExclusiveModeEXT& args) {
        Process_vkAcquireFullScreenExclusiveModeEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ReleaseFullScreenExclusiveModeEXT& args) {
        Process_vkReleaseFullScreenExclusiveModeEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceGroupSurfacePresentModes2EXT& args) {
        Process_vkGetDeviceGroupSurfacePresentModes2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateHeadlessSurfaceEXT& args) {
        Process_vkCreateHeadlessSurfaceEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetLineStippleEXT& args) {
        Process_vkCmdSetLineStippleEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ResetQueryPoolEXT& args) {
        Process_vkResetQueryPoolEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetCullModeEXT& args) {
        Process_vkCmdSetCullModeEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetFrontFaceEXT& args) {
        Process_vkCmdSetFrontFaceEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetPrimitiveTopologyEXT& args) {
        Process_vkCmdSetPrimitiveTopologyEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetViewportWithCountEXT& args) {
        Process_vkCmdSetViewportWithCountEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetScissorWithCountEXT& args) {
        Process_vkCmdSetScissorWithCountEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindVertexBuffers2EXT& args) {
        Process_vkCmdBindVertexBuffers2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthTestEnableEXT& args) {
        Process_vkCmdSetDepthTestEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthWriteEnableEXT& args) {
        Process_vkCmdSetDepthWriteEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthCompareOpEXT& args) {
        Process_vkCmdSetDepthCompareOpEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthBoundsTestEnableEXT& args) {
        Process_vkCmdSetDepthBoundsTestEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetStencilTestEnableEXT& args) {
        Process_vkCmdSetStencilTestEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetStencilOpEXT& args) {
        Process_vkCmdSetStencilOpEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CopyMemoryToImageEXT& args) {
        Process_vkCopyMemoryToImageEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CopyImageToMemoryEXT& args) {
        Process_vkCopyImageToMemoryEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CopyImageToImageEXT& args) {
        Process_vkCopyImageToImageEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::TransitionImageLayoutEXT& args) {
        Process_vkTransitionImageLayoutEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetImageSubresourceLayout2EXT& args) {
        Process_vkGetImageSubresourceLayout2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ReleaseSwapchainImagesEXT& args) {
        Process_vkReleaseSwapchainImagesEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetGeneratedCommandsMemoryRequirementsNV& args) {
        Process_vkGetGeneratedCommandsMemoryRequirementsNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdPreprocessGeneratedCommandsNV& args) {
        Process_vkCmdPreprocessGeneratedCommandsNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdExecuteGeneratedCommandsNV& args) {
        Process_vkCmdExecuteGeneratedCommandsNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindPipelineShaderGroupNV& args) {
        Process_vkCmdBindPipelineShaderGroupNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateIndirectCommandsLayoutNV& args) {
        Process_vkCreateIndirectCommandsLayoutNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyIndirectCommandsLayoutNV& args) {
        Process_vkDestroyIndirectCommandsLayoutNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthBias2EXT& args) {
        Process_vkCmdSetDepthBias2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::AcquireDrmDisplayEXT& args) {
        Process_vkAcquireDrmDisplayEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDrmDisplayEXT& args) {
        Process_vkGetDrmDisplayEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreatePrivateDataSlotEXT& args) {
        Process_vkCreatePrivateDataSlotEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyPrivateDataSlotEXT& args) {
        Process_vkDestroyPrivateDataSlotEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SetPrivateDataEXT& args) {
        Process_vkSetPrivateDataEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPrivateDataEXT& args) {
        Process_vkGetPrivateDataEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::QueueSetPerfHintQCOM& args) {
        Process_vkQueueSetPerfHintQCOM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDispatchTileQCOM& args) {
        Process_vkCmdDispatchTileQCOM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginPerTileExecutionQCOM& args) {
        Process_vkCmdBeginPerTileExecutionQCOM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndPerTileExecutionQCOM& args) {
        Process_vkCmdEndPerTileExecutionQCOM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDescriptorSetLayoutSizeEXT& args) {
        Process_vkGetDescriptorSetLayoutSizeEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDescriptorSetLayoutBindingOffsetEXT& args) {
        Process_vkGetDescriptorSetLayoutBindingOffsetEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDescriptorEXT& args) {
        Process_vkGetDescriptorEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindDescriptorBuffersEXT& args) {
        Process_vkCmdBindDescriptorBuffersEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDescriptorBufferOffsetsEXT& args) {
        Process_vkCmdSetDescriptorBufferOffsetsEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindDescriptorBufferEmbeddedSamplersEXT& args) {
        Process_vkCmdBindDescriptorBufferEmbeddedSamplersEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetFragmentShadingRateEnumNV& args) {
        Process_vkCmdSetFragmentShadingRateEnumNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceFaultInfoEXT& args) {
        Process_vkGetDeviceFaultInfoEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::AcquireWinrtDisplayNV& args) {
        Process_vkAcquireWinrtDisplayNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetWinrtDisplayNV& args) {
        Process_vkGetWinrtDisplayNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateDirectFBSurfaceEXT& args) {
        Process_vkCreateDirectFBSurfaceEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceDirectFBPresentationSupportEXT& args) {
        Process_vkGetPhysicalDeviceDirectFBPresentationSupportEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetVertexInputEXT& args) {
        Process_vkCmdSetVertexInputEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetMemoryZirconHandleFUCHSIA& args) {
        Process_vkGetMemoryZirconHandleFUCHSIA(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetMemoryZirconHandlePropertiesFUCHSIA& args) {
        Process_vkGetMemoryZirconHandlePropertiesFUCHSIA(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ImportSemaphoreZirconHandleFUCHSIA& args) {
        Process_vkImportSemaphoreZirconHandleFUCHSIA(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetSemaphoreZirconHandleFUCHSIA& args) {
        Process_vkGetSemaphoreZirconHandleFUCHSIA(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindInvocationMaskHUAWEI& args) {
        Process_vkCmdBindInvocationMaskHUAWEI(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetMemoryRemoteAddressNV& args) {
        Process_vkGetMemoryRemoteAddressNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetPatchControlPointsEXT& args) {
        Process_vkCmdSetPatchControlPointsEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetRasterizerDiscardEnableEXT& args) {
        Process_vkCmdSetRasterizerDiscardEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthBiasEnableEXT& args) {
        Process_vkCmdSetDepthBiasEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetLogicOpEXT& args) {
        Process_vkCmdSetLogicOpEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetPrimitiveRestartEnableEXT& args) {
        Process_vkCmdSetPrimitiveRestartEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateScreenSurfaceQNX& args) {
        Process_vkCreateScreenSurfaceQNX(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceScreenPresentationSupportQNX& args) {
        Process_vkGetPhysicalDeviceScreenPresentationSupportQNX(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetColorWriteEnableEXT& args) {
        Process_vkCmdSetColorWriteEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawMultiEXT& args) {
        Process_vkCmdDrawMultiEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawMultiIndexedEXT& args) {
        Process_vkCmdDrawMultiIndexedEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateMicromapEXT& args) {
        Process_vkCreateMicromapEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyMicromapEXT& args) {
        Process_vkDestroyMicromapEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBuildMicromapsEXT& args) {
        Process_vkCmdBuildMicromapsEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::BuildMicromapsEXT& args) {
        Process_vkBuildMicromapsEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CopyMicromapEXT& args) {
        Process_vkCopyMicromapEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CopyMicromapToMemoryEXT& args) {
        Process_vkCopyMicromapToMemoryEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CopyMemoryToMicromapEXT& args) {
        Process_vkCopyMemoryToMicromapEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::WriteMicromapsPropertiesEXT& args) {
        Process_vkWriteMicromapsPropertiesEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyMicromapEXT& args) {
        Process_vkCmdCopyMicromapEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyMicromapToMemoryEXT& args) {
        Process_vkCmdCopyMicromapToMemoryEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyMemoryToMicromapEXT& args) {
        Process_vkCmdCopyMemoryToMicromapEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdWriteMicromapsPropertiesEXT& args) {
        Process_vkCmdWriteMicromapsPropertiesEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceMicromapCompatibilityEXT& args) {
        Process_vkGetDeviceMicromapCompatibilityEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetMicromapBuildSizesEXT& args) {
        Process_vkGetMicromapBuildSizesEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawClusterHUAWEI& args) {
        Process_vkCmdDrawClusterHUAWEI(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawClusterIndirectHUAWEI& args) {
        Process_vkCmdDrawClusterIndirectHUAWEI(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SetDeviceMemoryPriorityEXT& args) {
        Process_vkSetDeviceMemoryPriorityEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDispatchParametersARM& args) {
        Process_vkCmdSetDispatchParametersARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDescriptorSetLayoutHostMappingInfoVALVE& args) {
        Process_vkGetDescriptorSetLayoutHostMappingInfoVALVE(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDescriptorSetHostMappingVALVE& args) {
        Process_vkGetDescriptorSetHostMappingVALVE(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPipelineIndirectMemoryRequirementsNV& args) {
        Process_vkGetPipelineIndirectMemoryRequirementsNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdUpdatePipelineIndirectBufferNV& args) {
        Process_vkCmdUpdatePipelineIndirectBufferNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPipelineIndirectDeviceAddressNV& args) {
        Process_vkGetPipelineIndirectDeviceAddressNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthClampEnableEXT& args) {
        Process_vkCmdSetDepthClampEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetPolygonModeEXT& args) {
        Process_vkCmdSetPolygonModeEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetRasterizationSamplesEXT& args) {
        Process_vkCmdSetRasterizationSamplesEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetSampleMaskEXT& args) {
        Process_vkCmdSetSampleMaskEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetAlphaToCoverageEnableEXT& args) {
        Process_vkCmdSetAlphaToCoverageEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetAlphaToOneEnableEXT& args) {
        Process_vkCmdSetAlphaToOneEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetLogicOpEnableEXT& args) {
        Process_vkCmdSetLogicOpEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetColorBlendEnableEXT& args) {
        Process_vkCmdSetColorBlendEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetColorBlendEquationEXT& args) {
        Process_vkCmdSetColorBlendEquationEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetColorWriteMaskEXT& args) {
        Process_vkCmdSetColorWriteMaskEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetTessellationDomainOriginEXT& args) {
        Process_vkCmdSetTessellationDomainOriginEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetRasterizationStreamEXT& args) {
        Process_vkCmdSetRasterizationStreamEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetConservativeRasterizationModeEXT& args) {
        Process_vkCmdSetConservativeRasterizationModeEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetExtraPrimitiveOverestimationSizeEXT& args) {
        Process_vkCmdSetExtraPrimitiveOverestimationSizeEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthClipEnableEXT& args) {
        Process_vkCmdSetDepthClipEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetSampleLocationsEnableEXT& args) {
        Process_vkCmdSetSampleLocationsEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetColorBlendAdvancedEXT& args) {
        Process_vkCmdSetColorBlendAdvancedEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetProvokingVertexModeEXT& args) {
        Process_vkCmdSetProvokingVertexModeEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetLineRasterizationModeEXT& args) {
        Process_vkCmdSetLineRasterizationModeEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetLineStippleEnableEXT& args) {
        Process_vkCmdSetLineStippleEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthClipNegativeOneToOneEXT& args) {
        Process_vkCmdSetDepthClipNegativeOneToOneEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetViewportWScalingEnableNV& args) {
        Process_vkCmdSetViewportWScalingEnableNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetViewportSwizzleNV& args) {
        Process_vkCmdSetViewportSwizzleNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetCoverageToColorEnableNV& args) {
        Process_vkCmdSetCoverageToColorEnableNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetCoverageToColorLocationNV& args) {
        Process_vkCmdSetCoverageToColorLocationNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetCoverageModulationModeNV& args) {
        Process_vkCmdSetCoverageModulationModeNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetCoverageModulationTableEnableNV& args) {
        Process_vkCmdSetCoverageModulationTableEnableNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetCoverageModulationTableNV& args) {
        Process_vkCmdSetCoverageModulationTableNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetShadingRateImageEnableNV& args) {
        Process_vkCmdSetShadingRateImageEnableNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetRepresentativeFragmentTestEnableNV& args) {
        Process_vkCmdSetRepresentativeFragmentTestEnableNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetCoverageReductionModeNV& args) {
        Process_vkCmdSetCoverageReductionModeNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateTensorARM& args) {
        Process_vkCreateTensorARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyTensorARM& args) {
        Process_vkDestroyTensorARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateTensorViewARM& args) {
        Process_vkCreateTensorViewARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyTensorViewARM& args) {
        Process_vkDestroyTensorViewARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetTensorMemoryRequirementsARM& args) {
        Process_vkGetTensorMemoryRequirementsARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::BindTensorMemoryARM& args) {
        Process_vkBindTensorMemoryARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceTensorMemoryRequirementsARM& args) {
        Process_vkGetDeviceTensorMemoryRequirementsARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyTensorARM& args) {
        Process_vkCmdCopyTensorARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceExternalTensorPropertiesARM& args) {
        Process_vkGetPhysicalDeviceExternalTensorPropertiesARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetShaderModuleIdentifierEXT& args) {
        Process_vkGetShaderModuleIdentifierEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetShaderModuleCreateInfoIdentifierEXT& args) {
        Process_vkGetShaderModuleCreateInfoIdentifierEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceOpticalFlowImageFormatsNV& args) {
        Process_vkGetPhysicalDeviceOpticalFlowImageFormatsNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateOpticalFlowSessionNV& args) {
        Process_vkCreateOpticalFlowSessionNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyOpticalFlowSessionNV& args) {
        Process_vkDestroyOpticalFlowSessionNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::BindOpticalFlowSessionImageNV& args) {
        Process_vkBindOpticalFlowSessionImageNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdOpticalFlowExecuteNV& args) {
        Process_vkCmdOpticalFlowExecuteNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::AntiLagUpdateAMD& args) {
        Process_vkAntiLagUpdateAMD(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateShadersEXT& args) {
        Process_vkCreateShadersEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyShaderEXT& args) {
        Process_vkDestroyShaderEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetShaderBinaryDataEXT& args) {
        Process_vkGetShaderBinaryDataEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindShadersEXT& args) {
        Process_vkCmdBindShadersEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetDepthClampRangeEXT& args) {
        Process_vkCmdSetDepthClampRangeEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetFramebufferTilePropertiesQCOM& args) {
        Process_vkGetFramebufferTilePropertiesQCOM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDynamicRenderingTilePropertiesQCOM& args) {
        Process_vkGetDynamicRenderingTilePropertiesQCOM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceCooperativeVectorPropertiesNV& args) {
        Process_vkGetPhysicalDeviceCooperativeVectorPropertiesNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::ConvertCooperativeVectorMatrixNV& args) {
        Process_vkConvertCooperativeVectorMatrixNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdConvertCooperativeVectorMatrixNV& args) {
        Process_vkCmdConvertCooperativeVectorMatrixNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SetLatencySleepModeNV& args) {
        Process_vkSetLatencySleepModeNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::LatencySleepNV& args) {
        Process_vkLatencySleepNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::SetLatencyMarkerNV& args) {
        Process_vkSetLatencyMarkerNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetLatencyTimingsNV& args) {
        Process_vkGetLatencyTimingsNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::QueueNotifyOutOfBandNV& args) {
        Process_vkQueueNotifyOutOfBandNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateDataGraphPipelinesARM& args) {
        Process_vkCreateDataGraphPipelinesARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateDataGraphPipelineSessionARM& args) {
        Process_vkCreateDataGraphPipelineSessionARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDataGraphPipelineSessionBindPointRequirementsARM& args) {
        Process_vkGetDataGraphPipelineSessionBindPointRequirementsARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDataGraphPipelineSessionMemoryRequirementsARM& args) {
        Process_vkGetDataGraphPipelineSessionMemoryRequirementsARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::BindDataGraphPipelineSessionMemoryARM& args) {
        Process_vkBindDataGraphPipelineSessionMemoryARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyDataGraphPipelineSessionARM& args) {
        Process_vkDestroyDataGraphPipelineSessionARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDispatchDataGraphARM& args) {
        Process_vkCmdDispatchDataGraphARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDataGraphPipelineAvailablePropertiesARM& args) {
        Process_vkGetDataGraphPipelineAvailablePropertiesARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDataGraphPipelinePropertiesARM& args) {
        Process_vkGetDataGraphPipelinePropertiesARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceQueueFamilyDataGraphPropertiesARM& args) {
        Process_vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM& args) {
        Process_vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetAttachmentFeedbackLoopEnableEXT& args) {
        Process_vkCmdSetAttachmentFeedbackLoopEnableEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBindTileMemoryQCOM& args) {
        Process_vkCmdBindTileMemoryQCOM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDecompressMemoryEXT& args) {
        Process_vkCmdDecompressMemoryEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDecompressMemoryIndirectCountEXT& args) {
        Process_vkCmdDecompressMemoryIndirectCountEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPartitionedAccelerationStructuresBuildSizesNV& args) {
        Process_vkGetPartitionedAccelerationStructuresBuildSizesNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBuildPartitionedAccelerationStructuresNV& args) {
        Process_vkCmdBuildPartitionedAccelerationStructuresNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetGeneratedCommandsMemoryRequirementsEXT& args) {
        Process_vkGetGeneratedCommandsMemoryRequirementsEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdPreprocessGeneratedCommandsEXT& args) {
        Process_vkCmdPreprocessGeneratedCommandsEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdExecuteGeneratedCommandsEXT& args) {
        Process_vkCmdExecuteGeneratedCommandsEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateIndirectCommandsLayoutEXT& args) {
        Process_vkCreateIndirectCommandsLayoutEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyIndirectCommandsLayoutEXT& args) {
        Process_vkDestroyIndirectCommandsLayoutEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateIndirectExecutionSetEXT& args) {
        Process_vkCreateIndirectExecutionSetEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyIndirectExecutionSetEXT& args) {
        Process_vkDestroyIndirectExecutionSetEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::UpdateIndirectExecutionSetPipelineEXT& args) {
        Process_vkUpdateIndirectExecutionSetPipelineEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::UpdateIndirectExecutionSetShaderEXT& args) {
        Process_vkUpdateIndirectExecutionSetShaderEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV& args) {
        Process_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetMemoryMetalHandleEXT& args) {
        Process_vkGetMemoryMetalHandleEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetMemoryMetalHandlePropertiesEXT& args) {
        Process_vkGetMemoryMetalHandlePropertiesEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::EnumeratePhysicalDeviceQueueFamilyPerformanceCountersByRegionARM& args) {
        Process_vkEnumeratePhysicalDeviceQueueFamilyPerformanceCountersByRegionARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdEndRendering2EXT& args) {
        Process_vkCmdEndRendering2EXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBeginCustomResolveEXT& args) {
        Process_vkCmdBeginCustomResolveEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceQueueFamilyDataGraphOpticalFlowImageFormatsARM& args) {
        Process_vkGetPhysicalDeviceQueueFamilyDataGraphOpticalFlowImageFormatsARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetPhysicalDeviceQueueFamilyDataGraphEngineOperationPropertiesARM& args) {
        Process_vkGetPhysicalDeviceQueueFamilyDataGraphEngineOperationPropertiesARM(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetComputeOccupancyPriorityNV& args) {
        Process_vkCmdSetComputeOccupancyPriorityNV(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetPrimitiveRestartIndexEXT& args) {
        Process_vkCmdSetPrimitiveRestartIndexEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CreateAccelerationStructureKHR& args) {
        Process_vkCreateAccelerationStructureKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::DestroyAccelerationStructureKHR& args) {
        Process_vkDestroyAccelerationStructureKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBuildAccelerationStructuresKHR& args) {
        Process_vkCmdBuildAccelerationStructuresKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdBuildAccelerationStructuresIndirectKHR& args) {
        Process_vkCmdBuildAccelerationStructuresIndirectKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CopyAccelerationStructureToMemoryKHR& args) {
        Process_vkCopyAccelerationStructureToMemoryKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CopyMemoryToAccelerationStructureKHR& args) {
        Process_vkCopyMemoryToAccelerationStructureKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::WriteAccelerationStructuresPropertiesKHR& args) {
        Process_vkWriteAccelerationStructuresPropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyAccelerationStructureKHR& args) {
        Process_vkCmdCopyAccelerationStructureKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyAccelerationStructureToMemoryKHR& args) {
        Process_vkCmdCopyAccelerationStructureToMemoryKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdCopyMemoryToAccelerationStructureKHR& args) {
        Process_vkCmdCopyMemoryToAccelerationStructureKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetAccelerationStructureDeviceAddressKHR& args) {
        Process_vkGetAccelerationStructureDeviceAddressKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdWriteAccelerationStructuresPropertiesKHR& args) {
        Process_vkCmdWriteAccelerationStructuresPropertiesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetDeviceAccelerationStructureCompatibilityKHR& args) {
        Process_vkGetDeviceAccelerationStructureCompatibilityKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetAccelerationStructureBuildSizesKHR& args) {
        Process_vkGetAccelerationStructureBuildSizesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdTraceRaysKHR& args) {
        Process_vkCmdTraceRaysKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetRayTracingCaptureReplayShaderGroupHandlesKHR& args) {
        Process_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdTraceRaysIndirectKHR& args) {
        Process_vkCmdTraceRaysIndirectKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::GetRayTracingShaderGroupStackSizeKHR& args) {
        Process_vkGetRayTracingShaderGroupStackSizeKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdSetRayTracingPipelineStackSizeKHR& args) {
        Process_vkCmdSetRayTracingPipelineStackSizeKHR(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawMeshTasksEXT& args) {
        Process_vkCmdDrawMeshTasksEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawMeshTasksIndirectEXT& args) {
        Process_vkCmdDrawMeshTasksIndirectEXT(call_info, args);
    }

    void Process(const ApiCallInfo& call_info, args::CmdDrawMeshTasksIndirectCountEXT& args) {
        Process_vkCmdDrawMeshTasksIndirectCountEXT(call_info, args);
    }

};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_GENERATED_VULKAN_CONSUMER_STAGE_H
