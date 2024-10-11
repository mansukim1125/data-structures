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

CharStack* char_stack_create_stack(const int size);

bool char_stack_is_full(const CharStack* s);

bool char_stack_is_empty(const CharStack* s);

int char_stack_push(CharStack* s, const char data);

char char_stack_pop(CharStack* s);

void char_stack_traverse(const CharStack* s, void (*cb) (char data));

#endif //STACK_H
