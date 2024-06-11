cmake_minimum_required(VERSION 3.10)
project(CppProject VERSION 1.0)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add subdirectories
add_subdirectory(lib/custom-lib-calculator)
add_subdirectory(tests)
