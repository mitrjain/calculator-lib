#!/bin/bash

if [ -d "build" ]; then
    rm -r build
fi

mkdir build
cd build

echo "Generating build instructions..."
cmake ..

echo "Building.."
make
