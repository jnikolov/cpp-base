cmake_minimum_required(VERSION 3.6.0)
project(base_project)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


add_subdirectory(externals/catch)
add_subdirectory(externals/spdlog)
add_subdirectory(src)
add_subdirectory(tests)