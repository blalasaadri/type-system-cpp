cmake_minimum_required(VERSION 2.6)

# Tests
## Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

## Link runTests with what we want to test and the GTest and pthread library
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)
add_executable(runTests test/math_test.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

# Main application
add_executable(prog src/main.cpp)