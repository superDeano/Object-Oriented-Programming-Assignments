cmake_minimum_required(VERSION 3.8)
project(Quest_2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES testpassenger.cpp Passenger.cpp Passenger.h Date.h Date.cpp)
add_executable(Quest_2 ${SOURCE_FILES})