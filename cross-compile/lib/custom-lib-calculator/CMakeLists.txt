cmake_minimum_required(VERSION 3.10)
project(CustomLib1Calculator VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Define the Calculator library
add_library(CustomLib1Calculator src/calculator.cpp)

# Specify include directories if needed
target_include_directories(CustomLib1Calculator PRIVATE include)
