cmake_minimum_required(VERSION 3.10)

project(MayhemIt)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

if(CPPTEST_COVERAGE)
  include(/home/ubuntu/cpptest/integration/cmake/cpptest-coverage.cmake)
endif()

add_executable(mayhemit
 mayhemit.c)
