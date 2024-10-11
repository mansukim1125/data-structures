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

IntStack* allocate_stack(int stack_size);

void free_stack(IntStack* s);

bool is_full(IntStack* s);

bool is_empty(IntStack* s);

int push(IntStack *s, int item);

int pop(IntStack* s);

void traverse(IntStack* s, void (*callback)(int));

#endif //STACK_H
