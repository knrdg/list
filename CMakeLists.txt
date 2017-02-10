cmake_minimum_required(VERSION 3.5)
project(sllist)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp mlist.cpp mlist.h)
add_executable(sllist ${SOURCE_FILES})