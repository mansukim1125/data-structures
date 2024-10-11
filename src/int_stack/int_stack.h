//
// Created by joonseok kim on 2024. 9. 21..
//

#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

typedef struct _int_stack {
  int* data;
  int top;
  int size;
} IntStack;

IntStack* int_stack_create_stack(int stack_size);

void int_stack_free_stack(IntStack* s);

bool int_stack_is_full(IntStack* s);

bool int_stack_is_empty(IntStack* s);

int int_stack_push(IntStack *s, int item);

int int_stack_pop(IntStack* s);

void int_stack_traverse(IntStack* s, void (*callback)(int));

#endif //STACK_H
