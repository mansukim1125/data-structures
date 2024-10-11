//
// Created by joonseok kim on 2024. 10. 3..
//

#include "double_stack.h"

#include <stdlib.h>

DoubleStack* double_stack_create_stack(const int size) {
  DoubleStack* new_stack = (DoubleStack*) malloc(sizeof(DoubleStack));

  new_stack->size = size;
  new_stack->top = -1;
  new_stack->data = (double*) malloc(sizeof(double) * size);

  return new_stack;
}

bool double_stack_is_full(const DoubleStack* s) {
  return s->top >= s->size - 1;
}

bool double_stack_is_empty(const DoubleStack* s) {
  return s->top == -1;
}

int double_stack_push(DoubleStack* s, const double data) {
  if (double_stack_is_full(s)) {
    return -1;
  }

  s->data[++s->top] = data;
  return 0;
}

double double_stack_pop(DoubleStack* s) {
  if (double_stack_is_empty(s)) {
    return -1.0;
  }
  return s->data[s->top--];
}

void double_stack_traverse(const DoubleStack* s, void (*cb) (double data)) {
  double* data = s->data;
  int current_length = s->top + 1;
  for (int i = 0; i < current_length; ++i) {
    cb(data[i]);
  }
}
