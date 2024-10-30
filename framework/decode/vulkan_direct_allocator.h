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

#ifndef GFXRECON_DECODE_VULKAN_DIRECT_ALLOCATOR_H
#define GFXRECON_DECODE_VULKAN_DIRECT_ALLOCATOR_H

#include "decode/handle_pointer_decoder.h"
#include "decode/struct_pointer_decoder.h"
#include "decode/vulkan_resource_allocator.h"
#include "format/format.h"
#include "util/defines.h"

#include "vulkan/vulkan.h"

#include <string>
#include <vector>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

struct VulkanDeviceMemoryInfo;
struct VulkanBufferInfo;
struct VulkanImageInfo;

class VulkanDirectAllocator
{
  public:
    typedef uintptr_t ResourceData;
    typedef uintptr_t MemoryData;

  public:
    VkResult Initialize(VulkanResourceAllocator& allocator);

    void Destroy();

    // Direct allocation methods that perform memory allocation and resource creation without performing memory
    // translation.  These methods allow the replay tool to allocate staging resources through the resource allocator so
    // that the allocator is aware of all allocations performed at replay.
    VkResult CreateBuffer(const VkBufferCreateInfo*    create_info,
                          const VkAllocationCallbacks* allocation_callbacks,
                          VkBuffer*                    buffer,
                          ResourceData*                allocator_data);

    void DestroyBuffer(VkBuffer buffer, const VkAllocationCallbacks* allocation_callbacks, ResourceData allocator_data);

    VkResult CreateImage(const VkImageCreateInfo*     create_info,
                         const VkAllocationCallbacks* allocation_callbacks,
                         VkImage*                     image,
                         ResourceData*                allocator_data);

    void DestroyImage(VkImage image, const VkAllocationCallbacks* allocation_callbacks, ResourceData allocator_data);

    VkResult AllocateMemory(const VkMemoryAllocateInfo*  allocate_info,
                            const VkAllocationCallbacks* allocation_callbacks,
                            VkDeviceMemory*              memory,
                            MemoryData*                  allocator_data);

    void
    FreeMemory(VkDeviceMemory memory, const VkAllocationCallbacks* allocation_callbacks, MemoryData allocator_data);

    VkResult BindBufferMemory(VkBuffer               buffer,
                              VkDeviceMemory         memory,
                              VkDeviceSize           memory_offset,
                              ResourceData           allocator_buffer_data,
                              MemoryData             allocator_memory_data,
                              VkMemoryPropertyFlags* bind_memory_properties);

    VkResult BindImageMemory(VkImage                image,
                             VkDeviceMemory         memory,
                             VkDeviceSize           memory_offset,
                             ResourceData           allocator_image_data,
                             MemoryData             allocator_memory_data,
                             VkMemoryPropertyFlags* bind_memory_properties);

    // Map the memory that the buffer was bound to.  The returned pointer references the start of the buffer memory (it
    // is the start of the memory the resource was bound to plus the resource bind offset).
    VkResult MapResourceMemory(VkDeviceSize size, VkMemoryMapFlags flags, void** data, ResourceData allocator_data);

    void UnmapResourceMemory(ResourceData allocator_data);

    VkResult InvalidateMappedMemoryRanges(uint32_t                   memory_range_count,
                                          const VkMappedMemoryRange* memory_ranges,
                                          const MemoryData*          allocator_datas);

  private:
    VulkanResourceAllocator* allocator_;
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_DECODE_VULKAN_DIRECT_ALLOCATOR_H
