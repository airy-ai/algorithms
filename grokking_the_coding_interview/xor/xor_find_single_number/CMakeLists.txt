cmake_minimum_required(VERSION 3.16)

add_definitions(-std=c++2a)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

set(CMAKE_BUILD_TYPE Debug)

project(xor)

add_executable (xor_find_single main.cpp)
