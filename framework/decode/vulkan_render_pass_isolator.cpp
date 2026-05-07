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

#include "vulkan_render_pass_isolator.h"

#include "util/logging.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

VulkanRenderPassIsolator::VulkanRenderPassIsolator(const VulkanDeviceInfo&            device_info,
                                                   const graphics::VulkanDeviceTable& table,
                                                   VulkanObjectInfoTable&             object_info_table) :
    device_info_(device_info), device_table_(table), object_info_table_(object_info_table)
{}

void VulkanRenderPassIsolator::BeginCommandBuffer(VulkanCommandBufferInfo* command_buffer_info)
{
    GFXRECON_ASSERT(segmented_command_buffers_.find(command_buffer_info) == segmented_command_buffers_.end());

    segmented_command_buffers_[command_buffer_info] = std::vector<VkCommandBuffer>();
    segmented_command_buffers_[command_buffer_info].push_back(command_buffer_info->handle);
}

void VulkanRenderPassIsolator::BeginRenderPass(VulkanCommandBufferInfo* command_buffer_info)
{
    GFXRECON_ASSERT(segmented_command_buffers_.find(command_buffer_info) != segmented_command_buffers_.end());
}

void VulkanRenderPassIsolator::EndRenderPass(VulkanCommandBufferInfo* command_buffer_info)
{
    GFXRECON_ASSERT(segmented_command_buffers_.find(command_buffer_info) != segmented_command_buffers_.end());

    // TODO: mark injected commands.

    // End command buffer at render pass boundary and allocate a new one for subsequent recording.
    device_table_.EndCommandBuffer(command_buffer_info->handle);

    // Allocate a new command buffer from the same pool and replace the handle in `command_buffer_info` with the new
    // one. The new command buffer will be used for subsequent recording until the next render pass boundary.
    VkCommandBuffer next_command_buffer = VK_NULL_HANDLE;

    VulkanCommandPoolInfo* pool_info = object_info_table_.GetVkCommandPoolInfo(command_buffer_info->pool_id);
    GFXRECON_ASSERT(pool_info != nullptr);

    VkCommandBufferAllocateInfo allocate_info = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO };
    allocate_info.commandPool                 = pool_info->handle;
    allocate_info.level                       = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    allocate_info.commandBufferCount          = 1;

    device_table_.AllocateCommandBuffers(device_info_.handle, &allocate_info, &next_command_buffer);
    GFXRECON_ASSERT(next_command_buffer != VK_NULL_HANDLE);

    segmented_command_buffers_[command_buffer_info].push_back(next_command_buffer);

    // This is the trick: replace the handle.
    command_buffer_info->handle = next_command_buffer;

    // Begin recording into the new command buffer.
    device_table_.BeginCommandBuffer(command_buffer_info->handle, nullptr);
}

void VulkanRenderPassIsolator::EndCommandBuffer(VulkanCommandBufferInfo* command_buffer_info)
{
    GFXRECON_ASSERT(segmented_command_buffers_.find(command_buffer_info) != segmented_command_buffers_.end());

    // Isolation work done.
}

void VulkanRenderPassIsolator::QueueSubmit(std::span<VkSubmitInfo> submit_infos)
{
    if (submit_infos.empty())
    {
        return;
    }

     // For each submit info, check if any of the command buffers being submitted has been segmented. If so, split the
    GFXRECON_ASSERT(!segmented_command_buffers_.empty());
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
