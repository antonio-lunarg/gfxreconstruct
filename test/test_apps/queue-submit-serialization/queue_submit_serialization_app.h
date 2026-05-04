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

#ifndef GFXRECON_TESTAPP_QUEUE_SUBMIT_SERIALIZATION_H
#define GFXRECON_TESTAPP_QUEUE_SUBMIT_SERIALIZATION_H

#include <test_app_base.h>

#include <application/application.h>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(test_app)
GFXRECON_BEGIN_NAMESPACE(qss)

const size_t MAX_FRAMES_IN_FLIGHT = 2;

class App : public gfxrecon::test::TestAppBase
{
    VkQueue graphics_queue_;
    VkQueue present_queue_;

    VkDeviceMemory storage_image_memory_;
    VkImage        storage_image_;
    VkImageView    storage_image_view_;

    VkDescriptorPool      descriptor_pool_;
    VkDescriptorSetLayout descriptor_set_layout_;
    VkDescriptorSet       descriptor_set_;
    VkPipelineLayout      pipeline_layout_;
    VkPipeline            red_compute_pipeline_;
    VkPipeline            green_compute_pipeline_;
    VkPipeline            blue_compute_pipeline_;
    VkPipeline            white_compute_pipeline_;

    VkCommandPool command_pools_[MAX_FRAMES_IN_FLIGHT];

    size_t current_frame_ = 0;

    gfxrecon::test::Sync sync_;
    std::array<VkSemaphore, 4> transition_semaphores_;
    std::array<VkSemaphore, 4> compute_semaphores_;
    bool compute_done_ = false;

    VkShaderModule create_compute_shader_module(const char* shader_path);
    void           create_descriptor_set();
    void           create_compute_pipeline();
    void           create_storage_image();
    void           recreate_swapchain();
    void           cleanup() override;
    bool           frame(const int frame_num) override;
    void           setup() override;

    void configure_instance_builder(gfxrecon::test::InstanceBuilder& instance_builder, vkmock::TestConfig*) override;
    void configure_swapchain_builder(test::SwapchainBuilder& swapchain_builder,
                                     vkmock::TestConfig*     test_config) override;

    bool compute_frame();
    void compute_dispatch(VkCommandBuffer command_buffer, VkPipeline compute_pipeline, uint32_t image_index);
    bool only_present_frame(int frame_num);
};

GFXRECON_END_NAMESPACE(qss)
GFXRECON_END_NAMESPACE(test_app)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_TESTAPP_QUEUE_SUBMIT_SERIALIZATION_H
