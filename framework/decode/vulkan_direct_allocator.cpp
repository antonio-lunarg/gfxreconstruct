/*
** Copyright (c) 2024 LunarG, Inc.
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

#include "decode/vulkan_direct_allocator.h"

#include "decode/custom_vulkan_struct_decoders.h"
#include "decode/vulkan_object_info.h"
#include "generated/generated_vulkan_struct_decoders.h"
#include "util/platform.h"

#include <cassert>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

VkResult VulkanDirectAllocator::Initialize(VulkanResourceAllocator& allocator)
{
    allocator_ = &allocator;
    return VK_SUCCESS;
}

void VulkanDirectAllocator::Destroy()
{
    allocator_ = nullptr;
}

VkResult VulkanDirectAllocator::CreateBuffer(const VkBufferCreateInfo*    create_info,
                                             const VkAllocationCallbacks* allocation_callbacks,
                                             VkBuffer*                    buffer,
                                             ResourceData*                allocator_data)
{
    return allocator_->CreateBuffer(create_info, allocation_callbacks, format::kNullHandleId, buffer, allocator_data);
}

void VulkanDirectAllocator::DestroyBuffer(VkBuffer                     buffer,
                                          const VkAllocationCallbacks* allocation_callbacks,
                                          ResourceData                 allocator_data)
{
    allocator_->DestroyBuffer(buffer, allocation_callbacks, allocator_data);
}

VkResult VulkanDirectAllocator::CreateImage(const VkImageCreateInfo*     create_info,
                                            const VkAllocationCallbacks* allocation_callbacks,
                                            VkImage*                     image,
                                            ResourceData*                allocator_data)
{
    return allocator_->CreateImage(create_info, allocation_callbacks, format::kNullHandleId, image, allocator_data);
}

void VulkanDirectAllocator::DestroyImage(VkImage                      image,
                                         const VkAllocationCallbacks* allocation_callbacks,
                                         ResourceData                 allocator_data)
{
    allocator_->DestroyImage(image, allocation_callbacks, allocator_data);
}

VkResult VulkanDirectAllocator::AllocateMemory(const VkMemoryAllocateInfo*  allocate_info,
                                               const VkAllocationCallbacks* allocation_callbacks,
                                               VkDeviceMemory*              memory,
                                               MemoryData*                  allocator_data)
{
    return allocator_->AllocateMemory(
        allocate_info, allocation_callbacks, format::kNullHandleId, memory, allocator_data);
}

void VulkanDirectAllocator::FreeMemory(VkDeviceMemory               memory,
                                       const VkAllocationCallbacks* allocation_callbacks,
                                       MemoryData                   allocator_data)
{
    allocator_->FreeMemory(memory, allocation_callbacks, allocator_data);
}

VkResult VulkanDirectAllocator::BindBufferMemory(VkBuffer               buffer,
                                                 VkDeviceMemory         memory,
                                                 VkDeviceSize           memory_offset,
                                                 ResourceData           allocator_buffer_data,
                                                 MemoryData             allocator_memory_data,
                                                 VkMemoryPropertyFlags* bind_memory_properties)
{
    return allocator_->BindBufferMemory(
        buffer, memory, memory_offset, allocator_buffer_data, allocator_memory_data, bind_memory_properties);
}

VkResult VulkanDirectAllocator::BindImageMemory(VkImage                image,
                                                VkDeviceMemory         memory,
                                                VkDeviceSize           memory_offset,
                                                ResourceData           allocator_image_data,
                                                MemoryData             allocator_memory_data,
                                                VkMemoryPropertyFlags* bind_memory_properties)
{
    return allocator_->BindImageMemory(
        image, memory, memory_offset, allocator_image_data, allocator_memory_data, bind_memory_properties);
}

VkResult VulkanDirectAllocator::InvalidateMappedMemoryRanges(uint32_t                   memory_range_count,
                                                             const VkMappedMemoryRange* memory_ranges,
                                                             const MemoryData*          allocator_datas)
{
    return allocator_->InvalidateMappedMemoryRanges(memory_range_count, memory_ranges, allocator_datas);
}

VkResult VulkanDirectAllocator::MapResourceMemory(VkDeviceSize     size,
                                                  VkMemoryMapFlags flags,
                                                  void**           data,
                                                  ResourceData     allocator_data)
{
    return allocator_->MapResourceMemoryDirect(size, flags, data, allocator_data);
}

void VulkanDirectAllocator::UnmapResourceMemory(ResourceData allocator_data)
{
    allocator_->UnmapResourceMemoryDirect(allocator_data);
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
