PROJECT(add_char)

cmake_minimum_required(VERSION 2.8)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})


SET(src_files main.cpp)

ADD_EXECUTABLE(add_char ${src_files})

SET(c_src_files main.c)

ADD_EXECUTABLE(add_char_c ${c_src_files})