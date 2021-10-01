cmake_minimum_required(VERSION 3.20)
project(OOP C)

set(CMAKE_C_STANDARD 11)

add_executable(OOP main.c cmake-build-debug/mynewclass.h mynewclass.c myclass.h myclass.c class1.h class2.h)
