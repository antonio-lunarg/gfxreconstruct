/*
** Copyright (c) 2019 LunarG, Inc.
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#ifndef GFXRECON_ENCODE_VULKAN_STATE_TABLE_H
#define GFXRECON_ENCODE_VULKAN_STATE_TABLE_H

#include "encode/vulkan_handle_wrappers.h"
#include "format/format.h"
#include "util/defines.h"

#include "vulkan/vulkan.h"

#include <cassert>
#include <unordered_map>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

class VulkanStateTable
{
  public:
    VulkanStateTable() {}

    ~VulkanStateTable() {}

    // clang-format off
    bool InsertWrapper(format::HandleId id, InstanceWrapper* wrapper)                   { return InsertEntry(id, wrapper, instance_map_); }
    bool InsertWrapper(format::HandleId id, PhysicalDeviceWrapper* wrapper)             { return InsertEntry(id, wrapper, physical_device_map_); }
    bool InsertWrapper(format::HandleId id, DeviceWrapper* wrapper)                     { return InsertEntry(id, wrapper, device_map_); }
    bool InsertWrapper(format::HandleId id, QueueWrapper* wrapper)                      { return InsertEntry(id, wrapper, queue_map_); }
    bool InsertWrapper(format::HandleId id, SemaphoreWrapper* wrapper)                  { return InsertEntry(id, wrapper, semaphore_map_); }
    bool InsertWrapper(format::HandleId id, CommandBufferWrapper* wrapper)              { return InsertEntry(id, wrapper, command_buffer_map_); }
    bool InsertWrapper(format::HandleId id, FenceWrapper* wrapper)                      { return InsertEntry(id, wrapper, fence_map_); }
    bool InsertWrapper(format::HandleId id, DeviceMemoryWrapper* wrapper)               { return InsertEntry(id, wrapper, device_memory_map_); }
    bool InsertWrapper(format::HandleId id, BufferWrapper* wrapper)                     { return InsertEntry(id, wrapper, buffer_map_); }
    bool InsertWrapper(format::HandleId id, ImageWrapper* wrapper)                      { return InsertEntry(id, wrapper, image_map_); }
    bool InsertWrapper(format::HandleId id, EventWrapper* wrapper)                      { return InsertEntry(id, wrapper, event_map_); }
    bool InsertWrapper(format::HandleId id, QueryPoolWrapper* wrapper)                  { return InsertEntry(id, wrapper, query_pool_map_); }
    bool InsertWrapper(format::HandleId id, BufferViewWrapper* wrapper)                 { return InsertEntry(id, wrapper, buffer_view_map_); }
    bool InsertWrapper(format::HandleId id, ImageViewWrapper* wrapper)                  { return InsertEntry(id, wrapper, image_view_map_); }
    bool InsertWrapper(format::HandleId id, ShaderModuleWrapper* wrapper)               { return InsertEntry(id, wrapper, shader_module_map_); }
    bool InsertWrapper(format::HandleId id, PipelineCacheWrapper* wrapper)              { return InsertEntry(id, wrapper, pipeline_cache_map_); }
    bool InsertWrapper(format::HandleId id, PipelineLayoutWrapper* wrapper)             { return InsertEntry(id, wrapper, pipeline_layout_map_); }
    bool InsertWrapper(format::HandleId id, RenderPassWrapper* wrapper)                 { return InsertEntry(id, wrapper, render_pass_map_); }
    bool InsertWrapper(format::HandleId id, PipelineWrapper* wrapper)                   { return InsertEntry(id, wrapper, pipeline_map_); }
    bool InsertWrapper(format::HandleId id, DescriptorSetLayoutWrapper* wrapper)        { return InsertEntry(id, wrapper, descriptor_set_layout_map_); }
    bool InsertWrapper(format::HandleId id, SamplerWrapper* wrapper)                    { return InsertEntry(id, wrapper, sampler_map_); }
    bool InsertWrapper(format::HandleId id, DescriptorPoolWrapper* wrapper)             { return InsertEntry(id, wrapper, descriptor_pool_map_); }
    bool InsertWrapper(format::HandleId id, DescriptorSetWrapper* wrapper)              { return InsertEntry(id, wrapper, descriptor_set_map_); }
    bool InsertWrapper(format::HandleId id, FramebufferWrapper* wrapper)                { return InsertEntry(id, wrapper, framebuffer_map_); }
    bool InsertWrapper(format::HandleId id, CommandPoolWrapper* wrapper)                { return InsertEntry(id, wrapper, command_pool_map_); }
    bool InsertWrapper(format::HandleId id, SamplerYcbcrConversionWrapper* wrapper)     { return InsertEntry(id, wrapper, sampler_ycbcr_conversion_map_); }
    bool InsertWrapper(format::HandleId id, DescriptorUpdateTemplateWrapper* wrapper)   { return InsertEntry(id, wrapper, descriptor_update_template_map_); }
    bool InsertWrapper(format::HandleId id, SurfaceKHRWrapper* wrapper)                 { return InsertEntry(id, wrapper, surface_khr_map_); }
    bool InsertWrapper(format::HandleId id, SwapchainKHRWrapper* wrapper)               { return InsertEntry(id, wrapper, swapchain_khr_map_); }
    bool InsertWrapper(format::HandleId id, DisplayKHRWrapper* wrapper)                 { return InsertEntry(id, wrapper, display_khr_map_); }
    bool InsertWrapper(format::HandleId id, DisplayModeKHRWrapper* wrapper)             { return InsertEntry(id, wrapper, display_mode_khr_map_); }
    bool InsertWrapper(format::HandleId id, DebugReportCallbackEXTWrapper* wrapper)     { return InsertEntry(id, wrapper, debug_report_callback_ext_map_); }
    bool InsertWrapper(format::HandleId id, ObjectTableNVXWrapper* wrapper)             { return InsertEntry(id, wrapper, object_table_nvx_map_); }
    bool InsertWrapper(format::HandleId id, IndirectCommandsLayoutNVXWrapper* wrapper)  { return InsertEntry(id, wrapper, indirect_commands_layout_nvx_map_); }
    bool InsertWrapper(format::HandleId id, DebugUtilsMessengerEXTWrapper* wrapper)     { return InsertEntry(id, wrapper, debug_utils_messenger_ext_map_); }
    bool InsertWrapper(format::HandleId id, ValidationCacheEXTWrapper* wrapper)         { return InsertEntry(id, wrapper, validation_cache_ext_map_); }
    bool InsertWrapper(format::HandleId id, AccelerationStructureNVWrapper* wrapper)    { return InsertEntry(id, wrapper, acceleration_structure_nv_map_); }

    void RemoveWrapper(format::HandleId id, InstanceWrapper** result)                   { assert(result); (*result) = RemoveEntry(id, instance_map_); }
    void RemoveWrapper(format::HandleId id, PhysicalDeviceWrapper** result)             { assert(result); (*result) = RemoveEntry(id, physical_device_map_); }
    void RemoveWrapper(format::HandleId id, DeviceWrapper** result)                     { assert(result); (*result) = RemoveEntry(id, device_map_); }
    void RemoveWrapper(format::HandleId id, QueueWrapper** result)                      { assert(result); (*result) = RemoveEntry(id, queue_map_); }
    void RemoveWrapper(format::HandleId id, SemaphoreWrapper** result)                  { assert(result); (*result) = RemoveEntry(id, semaphore_map_); }
    void RemoveWrapper(format::HandleId id, CommandBufferWrapper** result)              { assert(result); (*result) = RemoveEntry(id, command_buffer_map_); }
    void RemoveWrapper(format::HandleId id, FenceWrapper** result)                      { assert(result); (*result) = RemoveEntry(id, fence_map_); }
    void RemoveWrapper(format::HandleId id, DeviceMemoryWrapper** result)               { assert(result); (*result) = RemoveEntry(id, device_memory_map_); }
    void RemoveWrapper(format::HandleId id, BufferWrapper** result)                     { assert(result); (*result) = RemoveEntry(id, buffer_map_); }
    void RemoveWrapper(format::HandleId id, ImageWrapper** result)                      { assert(result); (*result) = RemoveEntry(id, image_map_); }
    void RemoveWrapper(format::HandleId id, EventWrapper** result)                      { assert(result); (*result) = RemoveEntry(id, event_map_); }
    void RemoveWrapper(format::HandleId id, QueryPoolWrapper** result)                  { assert(result); (*result) = RemoveEntry(id, query_pool_map_); }
    void RemoveWrapper(format::HandleId id, BufferViewWrapper** result)                 { assert(result); (*result) = RemoveEntry(id, buffer_view_map_); }
    void RemoveWrapper(format::HandleId id, ImageViewWrapper** result)                  { assert(result); (*result) = RemoveEntry(id, image_view_map_); }
    void RemoveWrapper(format::HandleId id, ShaderModuleWrapper** result)               { assert(result); (*result) = RemoveEntry(id, shader_module_map_); }
    void RemoveWrapper(format::HandleId id, PipelineCacheWrapper** result)              { assert(result); (*result) = RemoveEntry(id, pipeline_cache_map_); }
    void RemoveWrapper(format::HandleId id, PipelineLayoutWrapper** result)             { assert(result); (*result) = RemoveEntry(id, pipeline_layout_map_); }
    void RemoveWrapper(format::HandleId id, RenderPassWrapper** result)                 { assert(result); (*result) = RemoveEntry(id, render_pass_map_); }
    void RemoveWrapper(format::HandleId id, PipelineWrapper** result)                   { assert(result); (*result) = RemoveEntry(id, pipeline_map_); }
    void RemoveWrapper(format::HandleId id, DescriptorSetLayoutWrapper** result)        { assert(result); (*result) = RemoveEntry(id, descriptor_set_layout_map_); }
    void RemoveWrapper(format::HandleId id, SamplerWrapper** result)                    { assert(result); (*result) = RemoveEntry(id, sampler_map_); }
    void RemoveWrapper(format::HandleId id, DescriptorPoolWrapper** result)             { assert(result); (*result) = RemoveEntry(id, descriptor_pool_map_); }
    void RemoveWrapper(format::HandleId id, DescriptorSetWrapper** result)              { assert(result); (*result) = RemoveEntry(id, descriptor_set_map_); }
    void RemoveWrapper(format::HandleId id, FramebufferWrapper** result)                { assert(result); (*result) = RemoveEntry(id, framebuffer_map_); }
    void RemoveWrapper(format::HandleId id, CommandPoolWrapper** result)                { assert(result); (*result) = RemoveEntry(id, command_pool_map_); }
    void RemoveWrapper(format::HandleId id, SamplerYcbcrConversionWrapper** result)     { assert(result); (*result) = RemoveEntry(id, sampler_ycbcr_conversion_map_); }
    void RemoveWrapper(format::HandleId id, DescriptorUpdateTemplateWrapper** result)   { assert(result); (*result) = RemoveEntry(id, descriptor_update_template_map_); }
    void RemoveWrapper(format::HandleId id, SurfaceKHRWrapper** result)                 { assert(result); (*result) = RemoveEntry(id, surface_khr_map_); }
    void RemoveWrapper(format::HandleId id, SwapchainKHRWrapper** result)               { assert(result); (*result) = RemoveEntry(id, swapchain_khr_map_); }
    void RemoveWrapper(format::HandleId id, DisplayKHRWrapper** result)                 { assert(result); (*result) = RemoveEntry(id, display_khr_map_); }
    void RemoveWrapper(format::HandleId id, DisplayModeKHRWrapper** result)             { assert(result); (*result) = RemoveEntry(id, display_mode_khr_map_); }
    void RemoveWrapper(format::HandleId id, DebugReportCallbackEXTWrapper** result)     { assert(result); (*result) = RemoveEntry(id, debug_report_callback_ext_map_); }
    void RemoveWrapper(format::HandleId id, ObjectTableNVXWrapper** result)             { assert(result); (*result) = RemoveEntry(id, object_table_nvx_map_); }
    void RemoveWrapper(format::HandleId id, IndirectCommandsLayoutNVXWrapper** result)  { assert(result); (*result) = RemoveEntry(id, indirect_commands_layout_nvx_map_); }
    void RemoveWrapper(format::HandleId id, DebugUtilsMessengerEXTWrapper** result)     { assert(result); (*result) = RemoveEntry(id, debug_utils_messenger_ext_map_); }
    void RemoveWrapper(format::HandleId id, ValidationCacheEXTWrapper** result)         { assert(result); (*result) = RemoveEntry(id, validation_cache_ext_map_); }
    void RemoveWrapper(format::HandleId id, AccelerationStructureNVWrapper** result)    { assert(result); (*result) = RemoveEntry(id, acceleration_structure_nv_map_); }
    // clang-format on

  private:
    template <typename T>
    bool InsertEntry(format::HandleId id, T* wrapper, std::unordered_map<format::HandleId, T*>& map)
    {
        const auto& inserted = map.insert(std::make_pair(id, wrapper));
        return inserted.second;
    }

    template <typename T>
    T* RemoveEntry(format::HandleId id, std::unordered_map<format::HandleId, T*>& map)
    {
        T*   result = nullptr;
        auto entry  = map.find(id);

        if (entry != map.end())
        {
            result = entry->second;
            map.erase(entry);
        }

        return result;
    }

  private:
    std::unordered_map<format::HandleId, InstanceWrapper*>                  instance_map_;
    std::unordered_map<format::HandleId, PhysicalDeviceWrapper*>            physical_device_map_;
    std::unordered_map<format::HandleId, DeviceWrapper*>                    device_map_;
    std::unordered_map<format::HandleId, QueueWrapper*>                     queue_map_;
    std::unordered_map<format::HandleId, SemaphoreWrapper*>                 semaphore_map_;
    std::unordered_map<format::HandleId, CommandBufferWrapper*>             command_buffer_map_;
    std::unordered_map<format::HandleId, FenceWrapper*>                     fence_map_;
    std::unordered_map<format::HandleId, DeviceMemoryWrapper*>              device_memory_map_;
    std::unordered_map<format::HandleId, BufferWrapper*>                    buffer_map_;
    std::unordered_map<format::HandleId, ImageWrapper*>                     image_map_;
    std::unordered_map<format::HandleId, EventWrapper*>                     event_map_;
    std::unordered_map<format::HandleId, QueryPoolWrapper*>                 query_pool_map_;
    std::unordered_map<format::HandleId, BufferViewWrapper*>                buffer_view_map_;
    std::unordered_map<format::HandleId, ImageViewWrapper*>                 image_view_map_;
    std::unordered_map<format::HandleId, ShaderModuleWrapper*>              shader_module_map_;
    std::unordered_map<format::HandleId, PipelineCacheWrapper*>             pipeline_cache_map_;
    std::unordered_map<format::HandleId, PipelineLayoutWrapper*>            pipeline_layout_map_;
    std::unordered_map<format::HandleId, RenderPassWrapper*>                render_pass_map_;
    std::unordered_map<format::HandleId, PipelineWrapper*>                  pipeline_map_;
    std::unordered_map<format::HandleId, DescriptorSetLayoutWrapper*>       descriptor_set_layout_map_;
    std::unordered_map<format::HandleId, SamplerWrapper*>                   sampler_map_;
    std::unordered_map<format::HandleId, DescriptorPoolWrapper*>            descriptor_pool_map_;
    std::unordered_map<format::HandleId, DescriptorSetWrapper*>             descriptor_set_map_;
    std::unordered_map<format::HandleId, FramebufferWrapper*>               framebuffer_map_;
    std::unordered_map<format::HandleId, CommandPoolWrapper*>               command_pool_map_;
    std::unordered_map<format::HandleId, SamplerYcbcrConversionWrapper*>    sampler_ycbcr_conversion_map_;
    std::unordered_map<format::HandleId, DescriptorUpdateTemplateWrapper*>  descriptor_update_template_map_;
    std::unordered_map<format::HandleId, SurfaceKHRWrapper*>                surface_khr_map_;
    std::unordered_map<format::HandleId, SwapchainKHRWrapper*>              swapchain_khr_map_;
    std::unordered_map<format::HandleId, DisplayKHRWrapper*>                display_khr_map_;
    std::unordered_map<format::HandleId, DisplayModeKHRWrapper*>            display_mode_khr_map_;
    std::unordered_map<format::HandleId, DebugReportCallbackEXTWrapper*>    debug_report_callback_ext_map_;
    std::unordered_map<format::HandleId, ObjectTableNVXWrapper*>            object_table_nvx_map_;
    std::unordered_map<format::HandleId, IndirectCommandsLayoutNVXWrapper*> indirect_commands_layout_nvx_map_;
    std::unordered_map<format::HandleId, DebugUtilsMessengerEXTWrapper*>    debug_utils_messenger_ext_map_;
    std::unordered_map<format::HandleId, ValidationCacheEXTWrapper*>        validation_cache_ext_map_;
    std::unordered_map<format::HandleId, AccelerationStructureNVWrapper*>   acceleration_structure_nv_map_;
};

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_ENCODE_VULKAN_STATE_TABLE_H
