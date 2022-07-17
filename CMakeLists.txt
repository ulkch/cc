cmake_minimum_required(VERSION 3.22)
#project(cc C)
project(cc LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_executable(cc
        KTTABLE/sol.c
        CABS/sol.cpp)
