PROJECT(JULKA)

cmake_minimum_required(VERSION 2.8)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})


SET(src_files main.cpp)

ADD_EXECUTABLE(julka_cpp ${src_files})

SET(c_src_files main.c)

ADD_EXECUTABLE(julka_c ${c_src_files})

TARGET_LINK_LIBRARIES(julka_c m)