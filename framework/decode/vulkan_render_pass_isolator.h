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

#ifndef GFXRECON_DECODE_VULKAN_RENDER_PASS_ISOLATOR_H
#define GFXRECON_DECODE_VULKAN_RENDER_PASS_ISOLATOR_H

#include "decode/vulkan_object_info.h"
#include "decode/vulkan_object_info_table.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

class VulkanSegmentedCommandBuffer;

/**
 * @brief Splits command buffer recording at render pass boundaries into separate command buffers,
 * and expands a single `vkQueueSubmit` into multiple at submit time.
 * 
 * It's worth mentioning that dump-resources isolates individual draw calls by re-recording
 * every command into clone command buffers. It tracks desrcriptor/vertex/index state, and
 * reads back GPU data. All this at the fine granularity of draw calls.  In contrast, this
 * class works at the coarser granularity of render passes.
 * 
 * The idea behind this class it to end the current command buffer at each render pass boundary.
 * Consequently, a new command buffer is allocated from the same pool to replace
 * `VulkanCommandBufferInfo::handle`, so that all subsequent replay commands record into the
 * new command buffer.
 * 
 * Then, at `vkQueueSubmit` time, each segmented command buffer is submitted into individual
 * `vkQueueSubmit` calls with proper semaphore and fence management.
 * 
 * @todo At the moment, no state is carried over from one segmented command buffer to another.
 * While this might be accetable for a first implementation, we might want to intercept
 * state-setting commands (such as `vkCmdBindPipeline`, `vkCmdSetViewport`, etc) and replay
 * the accumulated state into each new command buffer segment.
 */
class VulkanRenderPassIsolator
{
    public:
        VulkanRenderPassIsolator(const VulkanDeviceInfo& device_info, const graphics::VulkanDeviceTable& table, VulkanObjectInfoTable& object_info_table);

        void BeginCommandBuffer(VulkanCommandBufferInfo *command_buffer_info);
        void BeginRenderPass(VulkanCommandBufferInfo *command_buffer_info);
        void EndRenderPass(VulkanCommandBufferInfo *command_buffer_info);
        void EndCommandBuffer(VulkanCommandBufferInfo* command_buffer_info);
        void QueueSubmit(std::span<VkSubmitInfo> submit_infos);

    private:
        const VulkanDeviceInfo& device_info_;
        const graphics::VulkanDeviceTable& device_table_;
        VulkanObjectInfoTable& object_info_table_;

        std::unordered_map<VulkanCommandBufferInfo*, std::vector<VkCommandBuffer>> segmented_command_buffers_;
};

using VulkanPerDeviceRenderPassIsolator = std::unordered_map<const VulkanDeviceInfo*, VulkanRenderPassIsolator>;

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_DECODE_VULKAN_RENDER_PASS_ISOLATOR_H
