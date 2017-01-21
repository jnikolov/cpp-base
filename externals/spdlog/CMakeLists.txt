project(spdlog LANGUAGES CXX)

#dependencies
find_package(Threads)

add_library(${PROJECT_NAME} INTERFACE)
target_link_libraries(${PROJECT_NAME} INTERFACE ${CMAKE_THREAD_LIBS_INIT})

set_property(TARGET ${PROJECT_NAME} PROPERTY INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/include)

install(DIRECTORY include/ DESTINATION include)

export(TARGETS ${PROJECT_NAME} FILE SPDLog.cmake)
