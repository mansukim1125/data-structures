//
// Created by joonseok kim on 2024. 10. 3..
//

#ifndef DOUBLE_STACK_H
#define DOUBLE_STACK_H
#include <stdbool.h>

typedef struct _doubleStack {
  double* data;
  int top;
  int size;
} DoubleStack;

DoubleStack* double_stack_create_stack(const int size);

bool double_stack_is_full(const DoubleStack* s);

bool double_stack_is_empty(const DoubleStack* s);

int double_stack_push(DoubleStack* s, const double data);

double double_stack_pop(DoubleStack* s);

void double_stack_traverse(const DoubleStack* s, void (*cb) (double data));

#endif //DOUBLE_STACK_H
