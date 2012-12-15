PROJECT(bitmap)

INCLUDE(FindQt4)

cmake_minimum_required(VERSION 2.6)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR} ${QT_INCLUDE_DIR} ${QT_QTCORE_INCLUDE_DIR})

ADD_EXECUTABLE(bitmap_cpp main.cpp)

ADD_EXECUTABLE(testcases testcases.cpp)

ADD_EXECUTABLE(new_bitmap bitmap.cpp)

ADD_EXECUTABLE(new_bitmap2 bitmap2.cpp)

ADD_EXECUTABLE(bitmap_c main.c)
TARGET_LINK_LIBRARIES(bitmap_c m)
# TARGET_LINK_LIBRARIES(new_bitmap ${QT_QTCORE_LIBRARY})