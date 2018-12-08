cmake_minimum_required(VERSION 3.5)

project(aufgabe2)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CMAKE_EXE_LINKER_FLAGS )


add_executable(aufgabe2 normal.cc readvector.cc uniform.cc)

