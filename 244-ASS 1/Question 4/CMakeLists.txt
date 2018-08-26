cmake_minimum_required(VERSION 3.8)
project(Question_4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES testHotel.cpp hotel.cpp hotel.h customer.h def_customer.cpp date.h date.cpp reservation.cpp reservation.h room.h room.cpp)
add_executable(Question_4 ${SOURCE_FILES})