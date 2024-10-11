cmake_minimum_required(VERSION 3.29)
project(infix_2_postfix C)

set(CMAKE_C_STANDARD 11)

add_executable(infix_2_postfix main.c
        lib/char_stack/char_stack.c
        lib/char_stack/char_stack.h
        lib/double_stack/double_stack.c
        lib/double_stack/double_stack.h
)
