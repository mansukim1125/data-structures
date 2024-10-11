#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib/char_stack/char_stack.h"
#include "lib/double_stack/double_stack.h"

char* allocate_str(const int length) {
  return (char*) malloc(sizeof(char) * length);
}

bool is_num(char c) {
  const int d = c - '0';
  return 0 <= d && d <= 9;
}

bool is_operand(const char ch) {
  const int d = ch - '0';
  return 0 <= d && d <= 9;
}

int precedence(const char operator) {
 // +, -, *, /
  int precedence;
  switch (operator) {
    case '+':
    case '-':
      precedence = 0;
      break;
    case '*':
    case '/':
      precedence = 1;
      break;
    default:
      precedence = -1;
      break;
  }

  return precedence;
}

char* infix_to_postfix(char* infix, unsigned long length) {
  if (infix == NULL) return NULL;

  char* postfix = (char*) malloc(sizeof(char) * length);

  CharStack* stack = create_stack((int) length);

  int postfix_i = 0;

  for (int i = 0; i < length; ++i) {
    if (is_operand(infix[i])) {
      // 피연산자이면 그냥 후위 표기식에 추가한다.
      postfix[postfix_i++] = infix[i];
    } else {
      // 연산자인 경우
      if (infix[i] == ')') {
        // 닫는 괄호일 경우 여는 괄호가 나올 때까지 Pop & postfix 추가 (여는 괄호는 추가하지 않는다.)
        while (!is_empty(stack)) {
          char popped = pop(stack);
          if (popped == '(') break;
          postfix[postfix_i++] = popped;
        };
      } else if (infix[i] == '(') {
        // 여는 괄호일 경우 Stack 에 그냥 추가한다.
        push(stack, infix[i]);
      } else {
        // 그 외 일반 연산자일 경우 Stack 에 집어 넣으려는 연산자 우선순위 <= Stack Top 연산자 우선순위 일 때 > 이 될 때까지 Pop & postfix 추가
        while (!is_empty(stack) && precedence(infix[i]) <= precedence(stack->data[stack->top])) {
          char popped = pop(stack);
          postfix[postfix_i++] = popped;
        }
        push(stack, infix[i]);
      }
    }
  }

  while (!is_empty(stack)) {
    postfix[postfix_i++] = pop(stack);
  }
  postfix[postfix_i] = '\0';

  free(stack->data);
  free(stack);

  return postfix;
}

void eval_postfix(const char* postfix, const unsigned long length, double* result) {
  if (postfix == NULL) return;

  DoubleStack* operands = double_stack_create_stack((int) length);

  for (int i = 0; i < length; ++i) {
    if (is_operand(postfix[i])) {
      double_stack_push(operands, postfix[i] - '0');
    } else {
      double op2 = double_stack_pop(operands);
      double op1 = double_stack_pop(operands);
      switch (postfix[i]) {
        case '+':
          double_stack_push(operands, op1 + op2);
          break;
        case '-':
          double_stack_push(operands, op1 - op2);
          break;
        case '*':
          double_stack_push(operands, op1 * op2);
          break;
        case '/':
          double_stack_push(operands, op1 / op2);
          break;
        default:;
      }
    }
  }

  *result = double_stack_pop(operands);
}

int main(void) {
  // input: 4+(5-2)*7/8
  // output: 452-7*8/+

  int buf_size = 257;
  char* buf = allocate_str(buf_size);

  scanf("%s", buf);

  unsigned long str_length = strnlen(buf, buf_size);

  char* postfix = infix_to_postfix(buf, str_length);

  printf("%s\n", postfix);

  double result;
  eval_postfix(postfix, strnlen(postfix, buf_size), &result);

  printf("%f", result);

  free(buf);
  free(postfix);

  return 0;
}
