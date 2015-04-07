cmake_minimum_required(VERSION 2.6)
project(vbj)

if(NOT WIN32)
  set(CMAKE_CXX_COMPILER /usr/bin/clang++)
  set(CMAKE_CXX_FLAGS "--std=c++11 -fms-extensions")
else()
endif()

set (SOURCE "")
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)

add_subdirectory(src)

include_directories(src)
include_directories(src/headers)

add_executable(vbj ${SOURCE})
