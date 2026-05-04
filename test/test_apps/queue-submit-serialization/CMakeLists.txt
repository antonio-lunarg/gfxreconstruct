###############################################################################
# Copyright (c) 2026 LunarG, Inc.
# All rights reserved
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to
# deal in the Software without restriction, including without limitation the
# rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
# sell copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
# IN THE SOFTWARE.
#
# Author: LunarG Team
# Description: CMake script for queue-submit-serialization test app
###############################################################################

set(TEST_NAME queue-submit-serialization)
add_library(gfxrecon-testapp-${TEST_NAME} app.cpp)

target_include_directories(gfxrecon-testapp-${TEST_NAME} PUBLIC
${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(gfxrecon-testapp-${TEST_NAME}
    PUBLIC
        gfxrecon-testapp-base)

common_build_directives(gfxrecon-testapp-${TEST_NAME})

if(NOT CMAKE_SYSTEM_NAME MATCHES "Android")
    install(TARGETS gfxrecon-testapp-${TEST_NAME} RUNTIME DESTINATION ${GFXRECON_INSTALL_TESTAPPDIR}/${TEST_NAME})
endif()


# Compile shaders for the test app and install them to the same location as the test app executable.
set(SHADER_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/shaders)
set(SHADER_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}/shaders)
file(GLOB SHADER_SOURCE_FILES ${SHADER_SOURCE_DIR}/*.vert ${SHADER_SOURCE_DIR}/*.frag)
foreach(SHADER_SOURCE_FILE ${SHADER_SOURCE_FILES})
    get_filename_component(SHADER_FILENAME ${SHADER_SOURCE_FILE} NAME)
    set(SHADER_BINARY_FILE ${SHADER_BINARY_DIR}/${SHADER_FILENAME}.spv)
    add_custom_command(
        OUTPUT ${SHADER_BINARY_FILE}
        COMMAND ${GFXRECON_SHADER_COMPILER} -V ${SHADER_SOURCE_FILE} -o ${SHADER_BINARY_FILE}
        DEPENDS ${SHADER_SOURCE_FILE}
        COMMENT "Compiling shader ${SHADER_SOURCE_FILE} to ${SHADER_BINARY_FILE}"
    )
    add_custom_target(${TEST_NAME}_shaders ALL DEPENDS ${SHADER_BINARY_FILE})
    add_dependencies(gfxrecon-testapp-${TEST_NAME} ${TEST_NAME}_shaders)
    install(FILES ${SHADER_BINARY_FILE} DESTINATION ${GFXRECON_INSTALL_TESTAPPDIR}/${TEST_NAME}/shaders)
endforeach()