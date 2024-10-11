//
// Created by joonseok kim on 2024. 9. 21..
//

#include "int_stack.h"

#include <stdlib.h>

IntStack* allocate_stack(int stack_size) {
  IntStack* new_stack = (IntStack*) malloc(sizeof(IntStack));
  new_stack->data = (int*) malloc(sizeof(int) * stack_size);

  new_stack->top = -1;
  new_stack->size = stack_size;

  return new_stack;
}

void free_stack(IntStack* s) {
  free(s->data);
  free(s);
}

bool is_full(IntStack* s) {
  return s->top >= s->size - 1;
}

bool is_empty(IntStack* s) {
  return s->top < 0;
}

int push(IntStack *s, int item) {
  if (is_full(s)) {
    return -1;
  }

  s->data[++s->top] = item;

  return 0;
}

int pop(IntStack* s) {
  if (is_empty(s)) {
    return -1;
  }

  return s->data[s->top--];
}

void traverse(IntStack* s, void (*callback) (int)) {
  int* data = s->data;
  for (int i = 0; i < s->top + 1; ++i) {
    callback(data[i]);
  }
}
