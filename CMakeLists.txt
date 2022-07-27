cmake_minimum_required(VERSION 3.21)
project(module_26_3)

set(CMAKE_CXX_STANDARD 17)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)

target_include_directories(module_26_3 PUBLIC ${MY_INCLUDE_DIR})
