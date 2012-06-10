PROJECT(SIMPLE_ARITHMETICS)

cmake_minimum_required(VERSION 2.8)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

SET(src_files main.cpp)


ADD_EXECUTABLE(arith ${src_files})