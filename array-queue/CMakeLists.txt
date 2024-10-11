cmake_minimum_required(VERSION 3.29)
project(queue C)

set(CMAKE_C_STANDARD 11)

add_executable(queue main.c
        lib/array-queue/array-queue.c
        lib/array-queue/array-queue.h)
