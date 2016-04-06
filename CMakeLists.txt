cmake_minimum_required(VERSION 3.3)
project(project_technosphere_c__)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp case.cpp case.h date.cpp date.h)
add_executable(project_technosphere_c__ ${SOURCE_FILES})