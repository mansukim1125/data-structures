//
// Created by joonseok kim on 2024. 10. 3..
//

#include "char_stack.h"

#include <stdlib.h>

CharStack* create_stack(const int size) {
  CharStack* new_stack = (CharStack*) malloc(sizeof(CharStack));

  new_stack->top = -1;
  new_stack->size = size;
  new_stack->data = (char*) malloc(sizeof(char) * size);

  return new_stack;
}

bool is_full(const CharStack* s) {
  return s->top >= s->size - 1;
}

bool is_empty(const CharStack* s) {
  return s->top == -1;
}

int push(CharStack* s, const char data) {
  if (is_full(s)) {
    return -1;
  }

  s->data[++s->top] = data;

  return 0;
}

char pop(CharStack* s) {
  if (is_empty(s)) {
    return -1;
  }

  return s->data[s->top--];
}

void traverse(const CharStack* s, void (*cb) (char data)) {
  int current_size = s->top + 1;
  char* data = s->data;

  for (int i = 0; i < current_size; ++i) {
    cb(data[i]);
  }
}
