cmake_minimum_required(VERSION 3.29)
project(data_structures C)

set(CMAKE_C_STANDARD 11)

include_directories(src/array_int_queue)
include_directories(src/char_stack)
include_directories(src/circular_int_queue)
include_directories(src/double_stack)
include_directories(src/infix_2_postfix)
include_directories(src/int_stack)

add_executable(data_structures
        src/array_int_queue/array_int_queue.c
        src/array_int_queue/array_int_queue.h
        src/array_int_queue/array_int_queue_runner.c
        src/array_int_queue/array_int_queue_runner.h
        src/char_stack/char_stack.c
        src/char_stack/char_stack.h
        src/double_stack/double_stack.c
        src/double_stack/double_stack.h
        src/infix_2_postfix/infix_2_postfix_runner.c
        src/infix_2_postfix/infix_2_postfix_runner.h
        src/int_stack/int_stack.c
        src/int_stack/int_stack.h
        src/int_stack/int_stack_runner.c
        src/int_stack/int_stack_runner.h
    main.c
        src/circular_int_queue/circular_int_queue.h
        src/circular_int_queue/circular_int_queue.c
        src/circular_int_queue/circular_int_queue_runner.h
        src/circular_int_queue/circular_int_queue_runner.c)
