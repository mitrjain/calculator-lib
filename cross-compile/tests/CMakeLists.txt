cmake_minimum_required(VERSION 3.10)
project(test_Calculator VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the test executable
add_executable(test_Calculator test_calculator.cpp)

# Link Google Test and Calculator library
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

target_link_libraries(test_Calculator ${GTEST_LIBRARIES} pthread CustomLib1Calculator)
