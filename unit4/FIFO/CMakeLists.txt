cmake_minimum_required(VERSION 3.22)
project(FIFO C)

set(CMAKE_C_STANDARD 99)

add_executable(FIFO main.c FIFO.c FIFO.h)
