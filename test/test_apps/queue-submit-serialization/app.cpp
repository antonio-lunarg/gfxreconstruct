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

#include <iostream>

#include <vulkan/vulkan_core.h>

#include <queue_submit_serialization_app.h>

namespace gfxrecon
{

namespace test_app
{

namespace qss
{

void App::configure_instance_builder(gfxrecon::test::InstanceBuilder& instance_builder, vkmock::TestConfig* test_config)
{
    if (test_config)
    {
        test_config->device_api_version_override = VK_MAKE_API_VERSION(0, 1, 3, 296);
    }

    TestAppBase::configure_instance_builder(instance_builder, test_config);
}

void App::configure_swapchain_builder(test::SwapchainBuilder& swapchain_builder, vkmock::TestConfig* test_config)
{
    GFXRECON_UNREFERENCED_PARAMETER(test_config);
    swapchain_builder.set_destroy_old_swapchain(false);
    swapchain_builder.add_image_usage_flags(VK_IMAGE_USAGE_TRANSFER_DST_BIT);
}

void App::create_storage_image()
{
    GFXRECON_ASSERT(storage_image_ == VK_NULL_HANDLE);
    GFXRECON_ASSERT(storage_image_view_ == VK_NULL_HANDLE);
    GFXRECON_ASSERT(storage_image_memory_ == VK_NULL_HANDLE);
    GFXRECON_ASSERT(descriptor_set_ != VK_NULL_HANDLE);

    // Create an RGBA8 image with the same dimensions as the swapchain images:
    // - with usage flags for storage as a compute shader is going to write color on it
    // - and transfer src as it's going to be copied onto the swapchain image later.
    VkImageCreateInfo image_create_info = { VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO };
    image_create_info.imageType         = VK_IMAGE_TYPE_2D;
    image_create_info.format            = VK_FORMAT_R8G8B8A8_UNORM;
    image_create_info.extent.width      = init.swapchain.extent.width;
    image_create_info.extent.height     = init.swapchain.extent.height;
    image_create_info.extent.depth      = 1;
    image_create_info.mipLevels         = 1;
    image_create_info.arrayLayers       = 1;
    image_create_info.samples           = VK_SAMPLE_COUNT_1_BIT;
    image_create_info.tiling            = VK_IMAGE_TILING_OPTIMAL;
    image_create_info.usage             = VK_IMAGE_USAGE_STORAGE_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
    image_create_info.sharingMode       = VK_SHARING_MODE_EXCLUSIVE;
    image_create_info.initialLayout     = VK_IMAGE_LAYOUT_UNDEFINED;
    VkResult result                     = init.disp.createImage(&image_create_info, nullptr, &storage_image_);
    VERIFY_VK_RESULT("failed to create storage image", result);

    // Allocate memory for the image just created.
    VkMemoryRequirements memory_requirements = {};
    init.disp.getImageMemoryRequirements(storage_image_, &memory_requirements);
    VkMemoryAllocateInfo memory_allocate_info = { VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO };
    memory_allocate_info.allocationSize       = memory_requirements.size;
    memory_allocate_info.memoryTypeIndex =
        find_memory_type(memory_requirements.memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    result = init.disp.allocateMemory(&memory_allocate_info, nullptr, &storage_image_memory_);
    VERIFY_VK_RESULT("failed to allocate memory for storage image", result);

    // Bind the allocated memory to the image.
    result = init.disp.bindImageMemory(storage_image_, storage_image_memory_, 0);
    VERIFY_VK_RESULT("failed to bind memory for storage image", result);

    // Create image view
    VkImageViewCreateInfo image_view_create_info           = { VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO };
    image_view_create_info.image                           = storage_image_;
    image_view_create_info.viewType                        = VK_IMAGE_VIEW_TYPE_2D;
    image_view_create_info.format                          = VK_FORMAT_R8G8B8A8_UNORM;
    image_view_create_info.subresourceRange.aspectMask     = VK_IMAGE_ASPECT_COLOR_BIT;
    image_view_create_info.subresourceRange.baseMipLevel   = 0;
    image_view_create_info.subresourceRange.levelCount     = 1;
    image_view_create_info.subresourceRange.baseArrayLayer = 0;
    image_view_create_info.subresourceRange.layerCount     = 1;
    result = init.disp.createImageView(&image_view_create_info, nullptr, &storage_image_view_);
    VERIFY_VK_RESULT("failed to create image view for storage image", result);

    // Update the descriptor set to point to the storage image view.
    VkDescriptorImageInfo descriptor_image_info = {};
    descriptor_image_info.imageView             = storage_image_view_;
    descriptor_image_info.imageLayout           = VK_IMAGE_LAYOUT_GENERAL;

    VkWriteDescriptorSet write = { VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET };
    write.dstSet               = descriptor_set_;
    write.dstBinding           = 0;
    write.dstArrayElement      = 0;
    write.descriptorCount      = 1;
    write.descriptorType       = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
    write.pImageInfo           = &descriptor_image_info;
    init.disp.updateDescriptorSets(1, &write, 0, nullptr);
}

VkShaderModule App::create_compute_shader_module(const char* shader_path)
{
    auto comp_module = gfxrecon::test::readShaderFromFile(init.disp,
                                                          shader_path
#ifdef __ANDROID__
                                                          ,
                                                          init.android_app
#endif
    );
    return comp_module;
}

void App::create_descriptor_set()
{
    VkDescriptorPoolSize pool_size = { VK_DESCRIPTOR_TYPE_STORAGE_IMAGE };
    pool_size.descriptorCount      = 1;

    VkDescriptorPoolCreateInfo pool_create_info = { VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO };
    pool_create_info.poolSizeCount              = 1;
    pool_create_info.pPoolSizes                 = &pool_size;
    pool_create_info.maxSets                    = 1;
    VkResult result = init.disp.createDescriptorPool(&pool_create_info, nullptr, &descriptor_pool_);
    VERIFY_VK_RESULT("failed to create descriptor pool", result);

    VkDescriptorSetLayoutBinding layout_binding = {};
    layout_binding.binding                      = 0;
    layout_binding.descriptorType               = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
    layout_binding.descriptorCount              = 1;
    layout_binding.stageFlags                   = VK_SHADER_STAGE_COMPUTE_BIT;

    VkDescriptorSetLayoutCreateInfo layout_create_info = { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO };
    layout_create_info.bindingCount                    = 1;
    layout_create_info.pBindings                       = &layout_binding;
    result = init.disp.createDescriptorSetLayout(&layout_create_info, nullptr, &descriptor_set_layout_);
    VERIFY_VK_RESULT("failed to create descriptor set layout", result);

    VkDescriptorSetAllocateInfo alloc_info = { VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO };
    alloc_info.descriptorPool              = descriptor_pool_;
    alloc_info.descriptorSetCount          = 1;
    alloc_info.pSetLayouts                 = &descriptor_set_layout_;

    result = init.disp.allocateDescriptorSets(&alloc_info, &descriptor_set_);
    VERIFY_VK_RESULT("failed to allocate descriptor set", result);
}

void App::create_compute_pipeline()
{
    auto red_comp_module   = create_compute_shader_module("queue-submit-serialization/shaders/red.comp.spv");
    auto green_comp_module = create_compute_shader_module("queue-submit-serialization/shaders/green.comp.spv");
    auto blue_comp_module  = create_compute_shader_module("queue-submit-serialization/shaders/blue.comp.spv");
    auto white_comp_module = create_compute_shader_module("queue-submit-serialization/shaders/white.comp.spv");

    VkPipelineShaderStageCreateInfo shader_stage_create_info = { VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO };
    shader_stage_create_info.stage                           = VK_SHADER_STAGE_COMPUTE_BIT;
    shader_stage_create_info.module                          = red_comp_module;
    shader_stage_create_info.pName                           = "main";

    VkPipelineLayoutCreateInfo pipeline_layout_create_info = { VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO };
    pipeline_layout_create_info.setLayoutCount             = 1;
    pipeline_layout_create_info.pSetLayouts                = &descriptor_set_layout_;
    VkResult result = init.disp.createPipelineLayout(&pipeline_layout_create_info, nullptr, &pipeline_layout_);
    VERIFY_VK_RESULT("failed to create pipeline layout", result);

    VkComputePipelineCreateInfo pipeline_create_info = { VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO };
    pipeline_create_info.stage                       = shader_stage_create_info;
    pipeline_create_info.layout                      = pipeline_layout_;
    result =
        init.disp.createComputePipelines(VK_NULL_HANDLE, 1, &pipeline_create_info, nullptr, &red_compute_pipeline_);
    VERIFY_VK_RESULT("failed to create compute pipeline", result);

    pipeline_create_info.stage.module = green_comp_module;
    result =
        init.disp.createComputePipelines(VK_NULL_HANDLE, 1, &pipeline_create_info, nullptr, &green_compute_pipeline_);
    VERIFY_VK_RESULT("failed to create compute pipeline", result);

    pipeline_create_info.stage.module = blue_comp_module;
    result =
        init.disp.createComputePipelines(VK_NULL_HANDLE, 1, &pipeline_create_info, nullptr, &blue_compute_pipeline_);
    VERIFY_VK_RESULT("failed to create compute pipeline", result);

    pipeline_create_info.stage.module = white_comp_module;
    result =
        init.disp.createComputePipelines(VK_NULL_HANDLE, 1, &pipeline_create_info, nullptr, &white_compute_pipeline_);
    VERIFY_VK_RESULT("failed to create compute pipeline", result);

    init.disp.destroyShaderModule(red_comp_module, nullptr);
    init.disp.destroyShaderModule(green_comp_module, nullptr);
    init.disp.destroyShaderModule(blue_comp_module, nullptr);
    init.disp.destroyShaderModule(white_comp_module, nullptr);
}

void App::recreate_swapchain()
{
    init.disp.deviceWaitIdle();

    if (storage_image_ != VK_NULL_HANDLE)
    {
        init.disp.destroyImageView(storage_image_view_, nullptr);
        init.disp.destroyImage(storage_image_, nullptr);
        init.disp.freeMemory(storage_image_memory_, nullptr);
        storage_image_        = VK_NULL_HANDLE;
        storage_image_view_   = VK_NULL_HANDLE;
        storage_image_memory_ = VK_NULL_HANDLE;
    }

    TestAppBase::recreate_swapchain(false);

    create_storage_image();
}

const int NUM_FRAMES = 10;
//#define IS_RUNNING(frame_num) frame_num < NUM_FRAMES;
#define IS_RUNNING(frame_num) true;

bool App::frame(const int frame_num)
{
    if (!compute_done_)
    {
        return compute_frame();
    }
    else
    {
        return only_present_frame(frame_num);
    }
}

bool App::compute_frame()
{
    init.disp.waitForFences(1, &sync_.in_flight_fences[current_frame_], VK_TRUE, UINT64_MAX);

    uint32_t image_index = 0;
    VkResult result      = init.disp.acquireNextImageKHR(
        init.swapchain, UINT64_MAX, sync_.available_semaphores[current_frame_], VK_NULL_HANDLE, &image_index);

    if (result == VK_ERROR_OUT_OF_DATE_KHR)
    {
        recreate_swapchain();
        return false;
    }
    else if (result != VK_SUCCESS && result != VK_SUBOPTIMAL_KHR)
    {
        throw gfxrecon::test::vulkan_exception("failed to acquire next image", result);
    }

    if (sync_.image_in_flight[image_index] != VK_NULL_HANDLE)
    {
        init.disp.waitForFences(1, &sync_.image_in_flight[image_index], VK_TRUE, UINT64_MAX);
    }
    sync_.image_in_flight[image_index] = sync_.in_flight_fences[current_frame_];

    init.disp.resetCommandPool(command_pools_[current_frame_], 0);
    VkCommandBufferAllocateInfo allocate_info = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO };
    allocate_info.commandBufferCount          = 6;
    allocate_info.commandPool                 = command_pools_[current_frame_];
    VkCommandBuffer command_buffers[6]        = {};
    result                                    = init.disp.allocateCommandBuffers(&allocate_info, command_buffers);
    VERIFY_VK_RESULT("failed to allocate command buffer", result);

    {
        VkCommandBufferBeginInfo begin_info = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO };
        result                              = init.disp.beginCommandBuffer(command_buffers[0], &begin_info);
        VERIFY_VK_RESULT("failed to create command buffer", result);

        // Transition the storage image to be writable by the compute shader.
        {
            VkImageMemoryBarrier image_barrier        = { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER };
            image_barrier.image                       = storage_image_;
            image_barrier.oldLayout                   = VK_IMAGE_LAYOUT_UNDEFINED;
            image_barrier.newLayout                   = VK_IMAGE_LAYOUT_GENERAL;
            image_barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
            image_barrier.subresourceRange.layerCount = VK_REMAINING_ARRAY_LAYERS;
            image_barrier.subresourceRange.levelCount = VK_REMAINING_MIP_LEVELS;
            image_barrier.srcAccessMask               = VK_ACCESS_NONE;
            image_barrier.dstAccessMask =
                VK_ACCESS_SHADER_WRITE_BIT; // The compute shader is going to write to the storage image.
            init.disp.cmdPipelineBarrier(command_buffers[0],
                                         VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                         VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
                                         0,
                                         0,
                                         nullptr,
                                         0,
                                         nullptr,
                                         1,
                                         &image_barrier);
        }

        // Transition the swapchain image to be optimal for transfer destination
        // as it's going to be the target of a copy operation from the storage image.
        {
            VkImageMemoryBarrier image_barrier        = { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER };
            image_barrier.image                       = init.swapchain_images[image_index];
            image_barrier.oldLayout                   = VK_IMAGE_LAYOUT_UNDEFINED;
            image_barrier.newLayout                   = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
            image_barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
            image_barrier.subresourceRange.layerCount = VK_REMAINING_ARRAY_LAYERS;
            image_barrier.subresourceRange.levelCount = VK_REMAINING_MIP_LEVELS;
            image_barrier.srcAccessMask               = VK_ACCESS_NONE;
            image_barrier.dstAccessMask =
                VK_ACCESS_TRANSFER_WRITE_BIT; // The storage image is going to be copied to the swapchain image.
            init.disp.cmdPipelineBarrier(command_buffers[0],
                                         VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                         VK_PIPELINE_STAGE_TRANSFER_BIT,
                                         0,
                                         0,
                                         nullptr,
                                         0,
                                         nullptr,
                                         1,
                                         &image_barrier);
        }

        // First command buffer is for transitions only.
        result = init.disp.endCommandBuffer(command_buffers[0]);
        VERIFY_VK_RESULT("failed to end command buffer", result);
    }

    compute_dispatch(command_buffers[1], red_compute_pipeline_, image_index);
    compute_dispatch(command_buffers[2], green_compute_pipeline_, image_index);
    compute_dispatch(command_buffers[3], blue_compute_pipeline_, image_index);
    compute_dispatch(command_buffers[4], white_compute_pipeline_, image_index);

    // Once done with the compute dispatches, transition the storage image to be optimal for transfer source
    // as it's going to be copied to the swapchain image.
    {
        VkCommandBufferBeginInfo begin_info = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO };
        result                              = init.disp.beginCommandBuffer(command_buffers[5], &begin_info);
        VERIFY_VK_RESULT("failed to create command buffer", result);

        VkImageBlit blit_region               = {};
        blit_region.srcSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        blit_region.srcSubresource.layerCount = 1;
        blit_region.srcSubresource.mipLevel   = 0;
        blit_region.dstSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        blit_region.dstSubresource.layerCount = 1;
        blit_region.dstSubresource.mipLevel   = 0;
        blit_region.srcOffsets[1].x           = static_cast<int32_t>(init.swapchain.extent.width);
        blit_region.srcOffsets[1].y           = static_cast<int32_t>(init.swapchain.extent.height);
        blit_region.srcOffsets[1].z           = 1;
        blit_region.dstOffsets[1].x           = static_cast<int32_t>(init.swapchain.extent.width);
        blit_region.dstOffsets[1].y           = static_cast<int32_t>(init.swapchain.extent.height);
        blit_region.dstOffsets[1].z           = 1;

        init.disp.cmdBlitImage(command_buffers[5],
                               storage_image_,
                               VK_IMAGE_LAYOUT_GENERAL,
                               init.swapchain_images[image_index],
                               VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                               1,
                               &blit_region,
                               VK_FILTER_NEAREST);

        // Transition the swapchain image to be optimal for presentation after the copy operation.
        {
            VkImageMemoryBarrier image_barrier        = { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER };
            image_barrier.image                       = init.swapchain_images[image_index];
            image_barrier.oldLayout                   = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
            image_barrier.newLayout                   = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
            image_barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
            image_barrier.subresourceRange.layerCount = VK_REMAINING_ARRAY_LAYERS;
            image_barrier.subresourceRange.levelCount = VK_REMAINING_MIP_LEVELS;
            image_barrier.srcAccessMask               = VK_ACCESS_TRANSFER_WRITE_BIT;
            image_barrier.dstAccessMask               = VK_ACCESS_NONE;
            init.disp.cmdPipelineBarrier(command_buffers[5],
                                         VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                                         VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
                                         0,
                                         0,
                                         nullptr,
                                         0,
                                         nullptr,
                                         1,
                                         &image_barrier);
        }

        result = init.disp.endCommandBuffer(command_buffers[5]);
        VERIFY_VK_RESULT("failed to end command buffer", result);
    }

    std::array<VkSubmitInfo, 6> submit_infos = {};

    submit_infos[0].sType              = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submit_infos[0].commandBufferCount = 1;
    submit_infos[0].pCommandBuffers    = &command_buffers[0];

    VkSemaphore          wait_semaphores[] = { sync_.available_semaphores[current_frame_] };
    VkPipelineStageFlags wait_stages[]     = { VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT };
    submit_infos[0].waitSemaphoreCount     = 1;
    submit_infos[0].pWaitSemaphores        = wait_semaphores;
    submit_infos[0].pWaitDstStageMask      = wait_stages;

    submit_infos[0].signalSemaphoreCount = static_cast<uint32_t>(transition_semaphores_.size());
    submit_infos[0].pSignalSemaphores    = transition_semaphores_.data();

    submit_infos[0].commandBufferCount = 1;
    submit_infos[0].pCommandBuffers    = &command_buffers[0];

    VkPipelineStageFlags compute_wait_stages[] = { VK_PIPELINE_STAGE_ALL_COMMANDS_BIT };
    for (size_t i = 1; i <= 4; ++i)
    {
        submit_infos[i].sType                = VK_STRUCTURE_TYPE_SUBMIT_INFO;
        submit_infos[i].waitSemaphoreCount   = 1;
        submit_infos[i].pWaitSemaphores      = &transition_semaphores_[i - 1];
        submit_infos[i].pWaitDstStageMask    = compute_wait_stages;
        submit_infos[i].signalSemaphoreCount = 1;
        submit_infos[i].pSignalSemaphores    = &compute_semaphores_[i - 1];
        submit_infos[i].commandBufferCount   = 1;
        submit_infos[i].pCommandBuffers      = &command_buffers[i];
    }

    submit_infos[5].sType                = VK_STRUCTURE_TYPE_SUBMIT_INFO;
    submit_infos[5].waitSemaphoreCount   = static_cast<uint32_t>(compute_semaphores_.size());
    VkPipelineStageFlags wait_stages_5[] = { VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                                             VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                                             VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
                                             VK_PIPELINE_STAGE_ALL_COMMANDS_BIT };
    submit_infos[5].pWaitSemaphores      = compute_semaphores_.data();
    submit_infos[5].pWaitDstStageMask    = wait_stages_5;

    VkSemaphore signal_semaphores[]      = { sync_.finished_semaphore[image_index] };
    submit_infos[5].signalSemaphoreCount = 1;
    submit_infos[5].pSignalSemaphores    = signal_semaphores;

    submit_infos[5].commandBufferCount = 1;
    submit_infos[5].pCommandBuffers    = &command_buffers[5];

    init.disp.resetFences(1, &sync_.in_flight_fences[current_frame_]);

    result = init.disp.queueSubmit(
        graphics_queue_, submit_infos.size(), submit_infos.data(), sync_.in_flight_fences[current_frame_]);
    VERIFY_VK_RESULT("failed to submit queue", result);

    compute_done_ = true;

    VkPresentInfoKHR present_info = { VK_STRUCTURE_TYPE_PRESENT_INFO_KHR };

    present_info.waitSemaphoreCount = 1;
    present_info.pWaitSemaphores    = signal_semaphores;

    VkSwapchainKHR swapChains[] = { init.swapchain };
    present_info.swapchainCount = 1;
    present_info.pSwapchains    = swapChains;

    present_info.pImageIndices = &image_index;

    result = init.disp.queuePresentKHR(present_queue_, &present_info);
    if (result == VK_ERROR_OUT_OF_DATE_KHR || result == VK_SUBOPTIMAL_KHR)
    {
        recreate_swapchain();
        return false;
    }
    VERIFY_VK_RESULT("failed to present queue", result);

    current_frame_ = (current_frame_ + 1) % MAX_FRAMES_IN_FLIGHT;

    return IS_RUNNING(frame_num);
}

void App::compute_dispatch(VkCommandBuffer command_buffer, VkPipeline compute_pipeline, uint32_t image_index)
{
    VkCommandBufferBeginInfo begin_info = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO };
    VkResult                 result     = init.disp.beginCommandBuffer(command_buffer, &begin_info);
    VERIFY_VK_RESULT("failed to create command buffer", result);

    init.disp.cmdBindPipeline(command_buffer, VK_PIPELINE_BIND_POINT_COMPUTE, compute_pipeline);

    init.disp.cmdBindDescriptorSets(
        command_buffer, VK_PIPELINE_BIND_POINT_COMPUTE, pipeline_layout_, 0, 1, &descriptor_set_, 0, nullptr);

    init.disp.cmdDispatch(command_buffer, init.swapchain.extent.width, init.swapchain.extent.height, 1);

    VkImageBlit blit_region               = {};
    blit_region.srcSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    blit_region.srcSubresource.layerCount = 1;
    blit_region.srcSubresource.mipLevel   = 0;
    blit_region.dstSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    blit_region.dstSubresource.layerCount = 1;
    blit_region.dstSubresource.mipLevel   = 0;
    blit_region.srcOffsets[1].x           = static_cast<int32_t>(init.swapchain.extent.width);
    blit_region.srcOffsets[1].y           = static_cast<int32_t>(init.swapchain.extent.height);
    blit_region.srcOffsets[1].z           = 1;
    blit_region.dstOffsets[1].x           = static_cast<int32_t>(init.swapchain.extent.width);
    blit_region.dstOffsets[1].y           = static_cast<int32_t>(init.swapchain.extent.height);
    blit_region.dstOffsets[1].z           = 1;

    result = init.disp.endCommandBuffer(command_buffer);
    VERIFY_VK_RESULT("failed to end command buffer", result);
}

bool App::only_present_frame(int frame_num)
{
    init.disp.waitForFences(1, &sync_.in_flight_fences[current_frame_], VK_TRUE, UINT64_MAX);

    uint32_t image_index = 0;
    VkResult result      = init.disp.acquireNextImageKHR(
        init.swapchain, UINT64_MAX, sync_.available_semaphores[current_frame_], VK_NULL_HANDLE, &image_index);

    if (result == VK_ERROR_OUT_OF_DATE_KHR)
    {
        recreate_swapchain();
        return IS_RUNNING(frame_num);
    }
    else if (result != VK_SUCCESS && result != VK_SUBOPTIMAL_KHR)
    {
        throw gfxrecon::test::vulkan_exception("failed to acquire next image", result);
    }

    if (sync_.image_in_flight[image_index] != VK_NULL_HANDLE)
    {
        init.disp.waitForFences(1, &sync_.image_in_flight[image_index], VK_TRUE, UINT64_MAX);
    }
    sync_.image_in_flight[image_index] = sync_.in_flight_fences[current_frame_];

    init.disp.resetCommandPool(command_pools_[current_frame_], 0);
    VkCommandBufferAllocateInfo allocate_info = {};
    allocate_info.sType                       = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    allocate_info.commandBufferCount          = 1;
    allocate_info.commandPool                 = command_pools_[current_frame_];
    VkCommandBuffer command_buffer;
    result = init.disp.allocateCommandBuffers(&allocate_info, &command_buffer);
    VERIFY_VK_RESULT("failed to allocate command buffer", result);

    {
        VkCommandBufferBeginInfo begin_info = { VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO };
        result                              = init.disp.beginCommandBuffer(command_buffer, &begin_info);
        VERIFY_VK_RESULT("failed to create command buffer", result);

        // Transition the swapchain image to be optimal for transfer destination
        // as it's going to be the target of a copy operation from the storage image.
        {
            VkImageMemoryBarrier image_barrier        = { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER };
            image_barrier.image                       = init.swapchain_images[image_index];
            image_barrier.oldLayout                   = VK_IMAGE_LAYOUT_UNDEFINED;
            image_barrier.newLayout                   = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
            image_barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
            image_barrier.subresourceRange.layerCount = VK_REMAINING_ARRAY_LAYERS;
            image_barrier.subresourceRange.levelCount = VK_REMAINING_MIP_LEVELS;
            image_barrier.srcAccessMask               = VK_ACCESS_NONE;
            image_barrier.dstAccessMask =
                VK_ACCESS_TRANSFER_WRITE_BIT; // The storage image is going to be copied to the swapchain image.
            init.disp.cmdPipelineBarrier(command_buffer,
                                         VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                                         VK_PIPELINE_STAGE_TRANSFER_BIT,
                                         0,
                                         0,
                                         nullptr,
                                         0,
                                         nullptr,
                                         1,
                                         &image_barrier);
        }

        VkImageBlit blit_region               = {};
        blit_region.srcSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        blit_region.srcSubresource.layerCount = 1;
        blit_region.srcSubresource.mipLevel   = 0;
        blit_region.dstSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        blit_region.dstSubresource.layerCount = 1;
        blit_region.dstSubresource.mipLevel   = 0;
        blit_region.srcOffsets[1].x           = static_cast<int32_t>(init.swapchain.extent.width);
        blit_region.srcOffsets[1].y           = static_cast<int32_t>(init.swapchain.extent.height);
        blit_region.srcOffsets[1].z           = 1;
        blit_region.dstOffsets[1].x           = static_cast<int32_t>(init.swapchain.extent.width);
        blit_region.dstOffsets[1].y           = static_cast<int32_t>(init.swapchain.extent.height);
        blit_region.dstOffsets[1].z           = 1;

        init.disp.cmdBlitImage(command_buffer,
                               storage_image_,
                               VK_IMAGE_LAYOUT_GENERAL,
                               init.swapchain_images[image_index],
                               VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                               1,
                               &blit_region,
                               VK_FILTER_NEAREST);

        // Transition the swapchain image to be optimal for presentation after the copy operation.
        {
            VkImageMemoryBarrier image_barrier        = { VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER };
            image_barrier.image                       = init.swapchain_images[image_index];
            image_barrier.oldLayout                   = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
            image_barrier.newLayout                   = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
            image_barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
            image_barrier.subresourceRange.layerCount = VK_REMAINING_ARRAY_LAYERS;
            image_barrier.subresourceRange.levelCount = VK_REMAINING_MIP_LEVELS;
            image_barrier.srcAccessMask               = VK_ACCESS_TRANSFER_WRITE_BIT;
            image_barrier.dstAccessMask               = VK_ACCESS_NONE;
            init.disp.cmdPipelineBarrier(command_buffer,
                                         VK_PIPELINE_STAGE_TRANSFER_BIT,
                                         VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
                                         0,
                                         0,
                                         nullptr,
                                         0,
                                         nullptr,
                                         1,
                                         &image_barrier);
        }

        result = init.disp.endCommandBuffer(command_buffer);
        VERIFY_VK_RESULT("failed to end command buffer", result);
    }

    VkSubmitInfo submitInfo = {};
    submitInfo.sType        = VK_STRUCTURE_TYPE_SUBMIT_INFO;

    VkSemaphore          wait_semaphores[] = { sync_.available_semaphores[current_frame_] };
    VkPipelineStageFlags wait_stages[]     = { VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT };
    submitInfo.waitSemaphoreCount          = 1;
    submitInfo.pWaitSemaphores             = wait_semaphores;
    submitInfo.pWaitDstStageMask           = wait_stages;

    submitInfo.commandBufferCount = 1;
    submitInfo.pCommandBuffers    = &command_buffer;

    VkSemaphore signal_semaphores[] = { sync_.finished_semaphore[image_index] };
    submitInfo.signalSemaphoreCount = 1;
    submitInfo.pSignalSemaphores    = signal_semaphores;

    init.disp.resetFences(1, &sync_.in_flight_fences[current_frame_]);

    result = init.disp.queueSubmit(graphics_queue_, 1, &submitInfo, sync_.in_flight_fences[current_frame_]);
    VERIFY_VK_RESULT("failed to submit queue", result);

    VkPresentInfoKHR present_info = { VK_STRUCTURE_TYPE_PRESENT_INFO_KHR };

    present_info.waitSemaphoreCount = 1;
    present_info.pWaitSemaphores    = signal_semaphores;

    VkSwapchainKHR swapchains[] = { init.swapchain };
    present_info.swapchainCount = 1;
    present_info.pSwapchains    = swapchains;

    present_info.pImageIndices = &image_index;

    result = init.disp.queuePresentKHR(present_queue_, &present_info);
    if (result == VK_ERROR_OUT_OF_DATE_KHR || result == VK_SUBOPTIMAL_KHR)
    {
        recreate_swapchain();
        return frame_num >= NUM_FRAMES;
    }
    VERIFY_VK_RESULT("failed to present queue", result);

    current_frame_ = (current_frame_ + 1) % MAX_FRAMES_IN_FLIGHT;

    return IS_RUNNING(frame_num);
}

void App::cleanup()
{
    for (size_t i = 0; i < sync_.finished_semaphore.size(); ++i)
    {
        init.disp.destroySemaphore(sync_.finished_semaphore[i], nullptr);
    }
    for (size_t i = 0; i < MAX_FRAMES_IN_FLIGHT; i++)
    {
        init.disp.destroySemaphore(sync_.available_semaphores[i], nullptr);
        init.disp.destroyFence(sync_.in_flight_fences[i], nullptr);
    }

    for (auto command_pool : command_pools_)
    {
        init.disp.destroyCommandPool(command_pool, nullptr);
    }

    init.disp.destroyDescriptorSetLayout(descriptor_set_layout_, nullptr);
    init.disp.destroyDescriptorPool(descriptor_pool_, nullptr);

    init.disp.destroyImageView(storage_image_view_, nullptr);
    init.disp.destroyImage(storage_image_, nullptr);
    init.disp.freeMemory(storage_image_memory_, nullptr);

    init.disp.destroyPipeline(red_compute_pipeline_, nullptr);
    init.disp.destroyPipeline(green_compute_pipeline_, nullptr);
    init.disp.destroyPipeline(blue_compute_pipeline_, nullptr);
    init.disp.destroyPipeline(white_compute_pipeline_, nullptr);
    init.disp.destroyPipelineLayout(pipeline_layout_, nullptr);
}

void App::setup()
{
    auto graphics_queue = init.device.get_queue(gfxrecon::test::QueueType::graphics);
    if (!graphics_queue.has_value())
        throw std::runtime_error("could not get graphics queue");
    graphics_queue_ = *graphics_queue;

    auto present_queue = init.device.get_queue(gfxrecon::test::QueueType::present);
    if (!present_queue.has_value())
        throw std::runtime_error("could not get present queue");
    present_queue_ = *present_queue;

    create_descriptor_set();
    create_compute_pipeline();
    create_storage_image();

    auto queue_family_index = init.device.get_queue_index(gfxrecon::test::QueueType::graphics);
    if (!queue_family_index)
        throw std::runtime_error("could not find graphics queue");
    for (auto& command_pool : command_pools_)
    {
        command_pool = gfxrecon::test::create_command_pool(init.disp, *queue_family_index);
    }

    sync_ = gfxrecon::test::create_sync_objects(init.swapchain, init.disp, MAX_FRAMES_IN_FLIGHT);

    VkSemaphoreCreateInfo semaphore_info = { VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO };

    for (size_t i = 0; i < transition_semaphores_.size(); ++i)
    {
        VkResult result = init.disp.createSemaphore(&semaphore_info, nullptr, &transition_semaphores_[i]);
        VERIFY_VK_RESULT("failed to create semaphore", result);
    }

    for (size_t i = 0; i < compute_semaphores_.size(); ++i)
    {
        VkResult result = init.disp.createSemaphore(&semaphore_info, nullptr, &compute_semaphores_[i]);
        VERIFY_VK_RESULT("failed to create semaphore", result);
    }
}

} // namespace qss

} // namespace test_app

} // namespace gfxrecon
