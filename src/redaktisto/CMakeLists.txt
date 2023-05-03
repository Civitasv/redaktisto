add_library(redaktisto editor.cc ui.cc)

find_package(OpenGL REQUIRED)
target_link_libraries(redaktisto PUBLIC glad glfw imgui spdlog md4c OpenGL::GL)

target_include_directories(redaktisto PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(
  redaktisto
  PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY
    "${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}/${CMAKE_HOST_SYSTEM_PROCESSOR}/${PROJECT_NAME}/lib"
    LIBRARY_OUTPUT_DIRECTORY
    "${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}/${CMAKE_HOST_SYSTEM_PROCESSOR}/${PROJECT_NAME}/lib"
    RUNTIME_OUTPUT_DIRECTORY
    "${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}/${CMAKE_HOST_SYSTEM_PROCESSOR}/${PROJECT_NAME}/lib"
)
