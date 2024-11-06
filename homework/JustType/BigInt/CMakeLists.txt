cmake_minimum_required(VERSION 3.10)
project(BigIntProject)

add_library(BigInt STATIC BigInt.cpp)

add_executable(BigIntExecutable main.cpp)

target_link_libraries(BigIntExecutable PRIVATE BigInt)
