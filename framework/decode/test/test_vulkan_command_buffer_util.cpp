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

#include "decode/common_object_info_table.h"
#include "decode/vulkan_command_buffer_util.h"
#include "decode/vulkan_object_info.h"
#include "decode/vulkan_state_recording_decoder.h"
#include "format/format_util.h"
#include "generated/generated_vulkan_dispatch_table.h"
#include "graphics/vulkan_injected_calls.h"
#include "util/logging.h"

#include <catch2/catch.hpp>

#include <cstdint>
#include <optional>
#include <vector>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

namespace
{

constexpr format::HandleId kDeviceId        = 1;
constexpr format::HandleId kPoolId          = 2;
constexpr format::HandleId kCommandBufferId = 42;

const VkDevice        kDeviceHandle   = format::FromHandleId<VkDevice>(0xD000);
const VkCommandPool   kPoolHandle     = format::FromHandleId<VkCommandPool>(0xC000);
const VkCommandBuffer kOriginalHandle = format::FromHandleId<VkCommandBuffer>(0xA000);

// Records the driver calls of the splitter.
// The dispatch table holds plain function pointers, so the fakes write to this global and each fixture resets it.
struct FakeDriver
{
    uint64_t                     next_command_buffer{ 0xB000 };
    std::vector<VkCommandBuffer> allocated;
    std::vector<VkCommandBuffer> freed;
};

FakeDriver fake_driver;

VKAPI_ATTR VkResult VKAPI_CALL FakeAllocateCommandBuffers(VkDevice,
                                                          const VkCommandBufferAllocateInfo* allocate_info,
                                                          VkCommandBuffer*                   command_buffers)
{
    for (uint32_t i = 0; i < allocate_info->commandBufferCount; ++i)
    {
        command_buffers[i] = format::FromHandleId<VkCommandBuffer>(fake_driver.next_command_buffer++);
        fake_driver.allocated.push_back(command_buffers[i]);
    }
    return VK_SUCCESS;
}

VKAPI_ATTR void VKAPI_CALL FakeFreeCommandBuffers(VkDevice,
                                                  VkCommandPool,
                                                  uint32_t               command_buffer_count,
                                                  const VkCommandBuffer* command_buffers)
{
    fake_driver.freed.insert(fake_driver.freed.end(), command_buffers, command_buffers + command_buffer_count);
}

VKAPI_ATTR VkResult VKAPI_CALL FakeBeginCommandBuffer(VkCommandBuffer, const VkCommandBufferBeginInfo*)
{
    return VK_SUCCESS;
}

VKAPI_ATTR VkResult VKAPI_CALL FakeEndCommandBuffer(VkCommandBuffer)
{
    return VK_SUCCESS;
}

VKAPI_ATTR VkResult VKAPI_CALL FakeResetCommandBuffer(VkCommandBuffer, VkCommandBufferResetFlags)
{
    return VK_SUCCESS;
}

VKAPI_ATTR VkResult VKAPI_CALL FakeCreateSemaphore(VkDevice,
                                                   const VkSemaphoreCreateInfo*,
                                                   const VkAllocationCallbacks*,
                                                   VkSemaphore* semaphore)
{
    *semaphore = format::FromHandleId<VkSemaphore>(0x5000);
    return VK_SUCCESS;
}

VKAPI_ATTR void VKAPI_CALL FakeDestroySemaphore(VkDevice, VkSemaphore, const VkAllocationCallbacks*) {}

// The split semaphore reads its counter when it is destroyed. Every target value counts as reached.
VKAPI_ATTR VkResult VKAPI_CALL FakeGetSemaphoreCounterValue(VkDevice, VkSemaphore, uint64_t* value)
{
    *value = UINT64_MAX;
    return VK_SUCCESS;
}

// One device with one reset-capable pool, which holds command buffer kCommandBufferId with handle kOriginalHandle.
class SplitterFixture
{
  public:
    SplitterFixture()
    {
        util::Log::Init(util::LoggingSeverity::kError);
        fake_driver = {};

        device_table_.AllocateCommandBuffers   = FakeAllocateCommandBuffers;
        device_table_.FreeCommandBuffers       = FakeFreeCommandBuffers;
        device_table_.BeginCommandBuffer       = FakeBeginCommandBuffer;
        device_table_.EndCommandBuffer         = FakeEndCommandBuffer;
        device_table_.ResetCommandBuffer       = FakeResetCommandBuffer;
        device_table_.CreateSemaphore          = FakeCreateSemaphore;
        device_table_.DestroySemaphore         = FakeDestroySemaphore;
        device_table_.GetSemaphoreCounterValue = FakeGetSemaphoreCounterValue;

        VulkanDeviceInfo device_info;
        device_info.handle     = kDeviceHandle;
        device_info.capture_id = kDeviceId;
        object_table_.AddVkDeviceInfo(std::move(device_info));

        VulkanCommandPoolInfo pool_info;
        pool_info.handle       = kPoolHandle;
        pool_info.capture_id   = kPoolId;
        pool_info.parent_id    = kDeviceId;
        pool_info.create_flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
        pool_info.child_ids.insert(kCommandBufferId);
        object_table_.AddVkCommandPoolInfo(std::move(pool_info));

        VulkanCommandBufferInfo command_buffer_info;
        command_buffer_info.handle     = kOriginalHandle;
        command_buffer_info.capture_id = kCommandBufferId;
        command_buffer_info.parent_id  = kDeviceId;
        command_buffer_info.pool_id    = kPoolId;
        object_table_.AddVkCommandBufferInfo(std::move(command_buffer_info));

        splitter_.emplace(object_table_.GetVkDeviceInfo(kDeviceId),
                          graphics::VulkanInjectedDeviceCalls(&device_table_),
                          &object_table_,
                          &decoder_);
    }

    ~SplitterFixture()
    {
        // The splitter destroys its split semaphores through the fake table.
        splitter_.reset();
        util::Log::Release();
    }

  protected:
    graphics::VulkanDeviceTable            device_table_;
    CommonObjectInfoTable                  object_table_;
    VulkanStateRecordingDecoder            decoder_;
    std::optional<VulkanCommandBufferUtil> splitter_;
};

} // namespace

TEST_CASE_METHOD(SplitterFixture,
                 "FreeCommandBuffers frees the split handles and restores the original handle",
                 "[isolate-render-passes]")
{
    VulkanCommandBufferInfo* command_buffer_info = object_table_.GetVkCommandBufferInfo(kCommandBufferId);

    splitter_->SplitCommandBuffer(command_buffer_info);
    REQUIRE(command_buffer_info->handle != kOriginalHandle);

    const format::HandleId command_buffer_ids[] = { kCommandBufferId };
    splitter_->FreeCommandBuffers(kPoolHandle, command_buffer_ids);

    // The caller frees the original handle, so the splitter must restore it and free only the handles it allocated.
    CHECK(command_buffer_info->handle == kOriginalHandle);
    CHECK_THAT(fake_driver.freed, Catch::Matchers::UnorderedEquals(fake_driver.allocated));
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
