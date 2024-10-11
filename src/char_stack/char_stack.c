//
// Created by joonseok kim on 2024. 10. 3..
//

#include "char_stack.h"

#include <stdlib.h>

CharStack* char_stack_create_stack(const int size) {
  CharStack* new_stack = (CharStack*) malloc(sizeof(CharStack));

  new_stack->top = -1;
  new_stack->size = size;
  new_stack->data = (char*) malloc(sizeof(char) * size);

  return new_stack;
}

bool char_stack_is_full(const CharStack* s) {
  return s->top >= s->size - 1;
}

bool char_stack_is_empty(const CharStack* s) {
  return s->top == -1;
}

int char_stack_push(CharStack* s, const char data) {
  if (char_stack_is_full(s)) {
    return -1;
  }

  s->data[++s->top] = data;

  return 0;
}

char char_stack_pop(CharStack* s) {
  if (char_stack_is_empty(s)) {
    return -1;
  }

  return s->data[s->top--];
}

void char_stack_traverse(const CharStack* s, void (*cb) (char data)) {
  int current_size = s->top + 1;
  char* data = s->data;

  for (int i = 0; i < current_size; ++i) {
    cb(data[i]);
  }
}
