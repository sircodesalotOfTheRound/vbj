cmake_minimum_required(VERSION 2.6)
project(vbj)

if(NOT WIN32)
  set(CMAKE_CXX_COMPILER /usr/bin/clang++)
  set(CMAKE_CXX_FLAGS "--std=c++11 -fms-extensions")
else()
endif()

include_directories(src)
include_directories(src/headers)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)
file(GLOB_RECURSE SOURCES ${PROJECT_SOURCE_DIR}/src/*.cxx)


add_executable(vbj ${SOURCES})
