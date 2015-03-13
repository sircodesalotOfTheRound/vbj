cmake_minimum_required(VERSION 2.6)
project(verbaj)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)
set(CMAKE_CXX_FLAGS "--std=c++11 -fms-extensions")
set(CMAKE_CXX_COMPILER /usr/bin/clang++)

add_subdirectory(src)
include_directories(src)
include_directories(src/headers)

add_executable(verbaj ${SOURCE} src/lit/parsing/LitFileInStream/LitFileInStream.cpp src/lit/parsing/LitFileInStream/LitFileInStream.h)
