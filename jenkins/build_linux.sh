#!/usr/bin/env bash

# Export path to cmake
export PATH=$PATH:/usr/local/bin
echo $PATH

# Run CMake
cmake "$(pwd)"
make

# Copy the binary
cp bin/verbaj bin/verbaj-linux-1.0.0

# List all files
ls -l bin