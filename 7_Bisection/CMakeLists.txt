cmake_minimum_required(VERSION 2.8)
project(7_Bisection)

set(CMAKE_CXX_FLAGS "-std=c++0x ${CMAKE_CXX_FLAGS} -g -ftest-coverage -fprofile-arcs")

add_executable(${PROJECT_NAME} "main.cpp")
