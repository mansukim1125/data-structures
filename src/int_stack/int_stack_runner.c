#include <stdio.h>
#include <stdlib.h>

#include "../int_stack/int_stack.h"

void print_item_in_stack(int data) {
  printf("%d ", data);
}

void handle_error(int exit_code) {
  if (exit_code != 0) {
    printf("%s %d\n", "an error occured:", exit_code);
  }
}

int int_stack_runner(void) {
  IntStack* s = int_stack_create_stack(10);

  bool stack_is_full = int_stack_is_full(s);

  printf("%s\n", stack_is_full ? "full" : "not full");

  handle_error(int_stack_push(s, 1));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 2));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 3));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 4));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  printf("popped item: %d\n", int_stack_pop(s));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 5));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 6));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  printf("popped item: %d\n", int_stack_pop(s));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 7));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 8));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 9));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 10));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 11));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 12));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 13));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  printf("popped item: %d\n", int_stack_pop(s));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 13));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(int_stack_push(s, 14));
  int_stack_traverse(s, print_item_in_stack);
  putchar('\n');

  int current_stack_item_count = s->top;

  for (int i = 0; i < current_stack_item_count; ++i) {
    printf("popped item: %d\n", int_stack_pop(s));
    int_stack_traverse(s, print_item_in_stack);
    putchar('\n');
  }
  printf("popped item: %d\n", int_stack_pop(s));
  handle_error(int_stack_pop(s));
  handle_error(int_stack_pop(s));

  int_stack_free_stack(s);

  return 0;
}
