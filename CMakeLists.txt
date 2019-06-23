cmake_minimum_required(VERSION 2.6)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)

# Main application
file (GLOB_RECURSE SOURCES
  src/*.cpp
)
add_executable(prog main.cpp ${SOURCES})
target_include_directories(prog PRIVATE include)

# Tests
## Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

## Link runTests with what we want to test and the GTest and pthread library
file (GLOB_RECURSE TEST_SOURCES
  test/*.cpp
)
add_executable(runTests ${SOURCES} ${TEST_SOURCES})
target_include_directories(runTests PRIVATE include)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)