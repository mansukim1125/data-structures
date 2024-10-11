//
// Created by joonseok kim on 2024. 10. 3..
//

#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

typedef struct _charStack {
  char* data;
  int top;
  int size;
} CharStack;

CharStack* create_stack(const int size);

bool is_full(const CharStack* s);

bool is_empty(const CharStack* s);

int push(CharStack* s, const char data);

char pop(CharStack* s);

void traverse(const CharStack* s, void (*cb) (char data));

#endif //STACK_H
