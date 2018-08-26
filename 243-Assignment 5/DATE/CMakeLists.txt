cmake_minimum_required(VERSION 3.8)
project(DATE)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES date.h testdate.cpp date.cpp)
add_executable(DATE ${SOURCE_FILES})