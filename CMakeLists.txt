cmake_minimum_required(VERSION 2.6)
project(verbaj)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)
set(CMAKE_CXX_FLAGS "--std=c++11 -fms-extensions")
set(CMAKE_CXX_COMPILER /usr/bin/clang++)
add_executable(verbaj main.cpp)
