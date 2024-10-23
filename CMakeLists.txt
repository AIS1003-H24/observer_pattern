cmake_minimum_required(VERSION 3.29)
project(observer_pattern)

set(CMAKE_CXX_STANDARD 20)

add_executable(observer_pattern main.cpp)
target_include_directories(observer_pattern PUBLIC ${CMAKE_SOURCE_DIR}/include)
