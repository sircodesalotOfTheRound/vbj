#!/usr/bin/env bash

# Export path to cmake
export PATH=$PATH:/usr/local/bin
echo $PATH

# Run CMake
cmake "$(pwd)"
make

# List all files
ls -l bin