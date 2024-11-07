cmake_minimum_required(VERSION 3.11)
project(BigInt)

include_directories(./include)

add_executable(BigIntExe ./src/main.cpp ./src/BigInt.cpp)
