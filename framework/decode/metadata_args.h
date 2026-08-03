/*
** Copyright (c) 2018-2023 Valve Corporation
** Copyright (c) 2018-2023 LunarG, Inc.
** Copyright (c) 2025 Advanced Micro Devices, Inc. All rights reserved.
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

#ifndef GFXRECON_DECODE_METADATA_ARGS_H
#define GFXRECON_DECODE_METADATA_ARGS_H

#include "util/defines.h"
#include "format/format.h"
#include "generated/generated_vulkan_struct_decoders.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)
GFXRECON_BEGIN_NAMESPACE(args)

struct ExeFileInfo
{
    const util::filepath::FileInfo& info_record;
};

struct DisplayMessage
{
    const std::string& message;
};

struct FillMemory
{
    uint64_t       memory_id;
    uint64_t       offset;
    uint64_t       size;
    const uint8_t* data;
};

struct FillMemoryResourceValue
{
    const format::FillMemoryResourceValueCommandHeader& command_header;
    const uint8_t*                                      data;
};

struct ResizeWindow
{
    format::HandleId surface_id;
    uint32_t         width;
    uint32_t         height;
};

struct ResizeWindow2
{
    format::HandleId surface_id;
    uint32_t         width;
    uint32_t         height;
    uint32_t         pre_transform;
};

struct CreateHardwareBuffer
{
    format::HandleId                                    device_id;
    format::HandleId                                    memory_id;
    uint64_t                                            buffer_id;
    uint32_t                                            format;
    uint32_t                                            width;
    uint32_t                                            height;
    uint32_t                                            stride;
    uint64_t                                            usage;
    uint32_t                                            layers;
    const std::vector<format::HardwareBufferPlaneInfo>& plane_info;
};

struct DestroyHardwareBuffer
{
    uint64_t buffer_id;
};

struct CreateHeapAllocation
{
    uint64_t allocation_id;
    uint64_t allocation_size;
};

struct SetDeviceProperties
{
    format::HandleId   physical_device_id;
    uint32_t           api_version;
    uint32_t           driver_version;
    uint32_t           vendor_id;
    uint32_t           device_id;
    uint32_t           device_type;
    const uint8_t      pipeline_cache_uuid[format::kUuidSize];
    const std::string& device_name;
};

struct SetDeviceMemoryProperties
{
    format::HandleId                             physical_device_id;
    const std::vector<format::DeviceMemoryType>& memory_types;
    const std::vector<format::DeviceMemoryHeap>& memory_heaps;
};

struct SetOpaqueAddress
{
    format::HandleId device_id;
    format::HandleId object_id;
    uint64_t         address;
};

struct SetOpaqueDescriptorData
{
    format::HandleId device_id;
    format::HandleId object_id;
    uint32_t         data_size;
    const uint8_t*   data;
};

struct SetRayTracingShaderGroupHandles
{
    format::HandleId device_id;
    format::HandleId pipeline_id;
    size_t           data_size;
    const uint8_t*   data;
};

struct SetSwapchainImageState
{
    format::HandleId                                    device_id;
    format::HandleId                                    swapchain_id;
    uint32_t                                            last_presented_image;
    const std::vector<format::SwapchainImageStateInfo>& image_state;
};

struct BeginResourceInit
{
    format::HandleId device_id;
    uint64_t         total_copy_size;
    uint64_t         max_copy_size;
};

struct EndResourceInit
{
    format::HandleId device_id;
};

struct InitBuffer
{
    format::HandleId device_id;
    format::HandleId buffer_id;
    uint64_t         data_size;
    const uint8_t*   data;
};

struct InitTensor
{
    format::HandleId device_id;
    format::HandleId tensor_id;
    uint64_t         data_size;
    const uint8_t*   data;
};

struct InitImage
{
    format::HandleId             device_id;
    format::HandleId             image_id;
    uint64_t                     data_size;
    uint32_t                     aspect;
    uint32_t                     layout;
    const std::vector<uint64_t>& level_sizes;
    const uint8_t*               data;
};

struct InitSubresource
{
    const format::InitSubresourceCommandHeader& command_header;
    const uint8_t*                              data;
};

struct ExecuteBlocksFromFile
{
    uint32_t           n_blocks;
    int64_t            offset;
    const std::string& filename;
};

struct VulkanBuildAccelerationStructures
{
    format::HandleId                                                           device_id;
    uint32_t                                                                   info_count;
    StructPointerDecoder<Decoded_VkAccelerationStructureBuildGeometryInfoKHR>* geometry_infos;
    StructPointerDecoder<Decoded_VkAccelerationStructureBuildRangeInfoKHR*>*   range_infos;
};

struct VulkanCopyAccelerationStructures
{
    format::HandleId                                                  device_id;
    StructPointerDecoder<Decoded_VkCopyAccelerationStructureInfoKHR>* copy_infos;
};

struct VulkanWriteAccelerationStructuresProperties
{
    format::HandleId device_id;
    VkQueryType      query_type;
    format::HandleId acceleration_structure_id;
};

struct ViewRelativeLocation
{
    format::ThreadId                    thread_id;
    const format::ViewRelativeLocation& location;
};

struct InitializeMeta
{
    const format::InitializeMetaCommand& command_header;
    const uint8_t*                       parameters_data;
};

GFXRECON_END_NAMESPACE(args)
GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_DECODE_METADATA_ARGS_H
