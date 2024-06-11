# Add the test executable
add_executable(test_Calculator test_calculator.cpp)

# Link Google Test and Calculator library
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

target_link_libraries(test_Calculator ${GTEST_LIBRARIES} pthread CustomLib1Calculator)
