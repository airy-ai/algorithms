cmake_minimum_required(VERSION 3.20.1)

add_definitions(-std=c++2a)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

set(CMAKE_BUILD_TYPE Debug)

project(xor)

add_executable (xor_find_two_single_numbers main.cpp)
