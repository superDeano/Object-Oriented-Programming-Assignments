cmake_minimum_required(VERSION 3.8)
project(Question_3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES testReservation.cpp reservation.cpp reservation.h date.h customer.h room.h date.cpp def_customer.cpp room.cpp)
add_executable(Question_3 ${SOURCE_FILES})