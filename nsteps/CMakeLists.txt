PROJECT(nsteps)

cmake_minimum_required(VERSION 2.8)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})


SET(cpp_src_files main.cpp)

ADD_EXECUTABLE(nsteps_cpp ${cpp_src_files})

SET(c_src_files main.c)

ADD_EXECUTABLE(nsteps_c ${c_src_files})