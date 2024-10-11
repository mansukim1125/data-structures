#include <stdio.h>
#include <stdlib.h>

#include "stack/int_stack.h"

void print_item_in_stack(int data) {
  printf("%d ", data);
}

void handle_error(int exit_code) {
  if (exit_code != 0) {
    printf("%s %d\n", "an error occured:", exit_code);
  }
}

int main(void) {
  IntStack* s = allocate_stack(10);

  bool stack_is_full = is_full(s);

  printf("%s\n", stack_is_full ? "full" : "not full");

  handle_error(push(s, 1));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 2));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 3));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 4));
  traverse(s, print_item_in_stack);
  putchar('\n');

  printf("popped item: %d\n", pop(s));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 5));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 6));
  traverse(s, print_item_in_stack);
  putchar('\n');

  printf("popped item: %d\n", pop(s));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 7));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 8));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 9));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 10));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 11));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 12));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 13));
  traverse(s, print_item_in_stack);
  putchar('\n');

  printf("popped item: %d\n", pop(s));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 13));
  traverse(s, print_item_in_stack);
  putchar('\n');

  handle_error(push(s, 14));
  traverse(s, print_item_in_stack);
  putchar('\n');

  int current_stack_item_count = s->top;

  for (int i = 0; i < current_stack_item_count; ++i) {
    printf("popped item: %d\n", pop(s));
    traverse(s, print_item_in_stack);
    putchar('\n');
  }
  printf("popped item: %d\n", pop(s));
  handle_error(pop(s));
  handle_error(pop(s));

  free_stack(s);

  return 0;
}
