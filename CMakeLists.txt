cmake_minimum_required(VERSION 3.24)
project(template-print)

set(CMAKE_CXX_STANDARD 17)

add_executable(template-print
        src/main.cpp
        src/print.cpp
        tests/TestRunner.cpp tests/TestRunner.h
)
