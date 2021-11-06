cmake_minimum_required(VERSION 3.1)

project(StringToDouble)
add_library(StringToDouble SHARED src/core.c)
add_executable(StringToDouble.test tests/Check.Test.cpp)
target_link_libraries(StringToDouble.test StringToDouble gtest gtest_main pthread)
