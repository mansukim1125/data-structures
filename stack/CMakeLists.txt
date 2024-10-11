cmake_minimum_required(VERSION 3.29)
project(stack C)

set(CMAKE_C_STANDARD 11)

add_executable(stack src/main.c
        src/stack/int_stack.c
        src/stack/int_stack.h)
