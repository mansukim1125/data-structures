#include <stdio.h>
#include <stdlib.h>

#include "lib/array-queue/array-queue.h"

void determine_exit_status(int code) {
  if (code < 0) {
    exit(code);
  }
}

void queue_traverse(int data) {
  printf("%d ", data);
}

int main(void) {
  ArrayIntQueue* queue = array_int_queue_create(10);

  bool is_empty = array_int_queue_is_empty(queue);
  printf("%s\n", is_empty ? "empty" : "not empty");

  bool is_full = array_int_queue_is_full(queue);
  printf("%s\n", is_full ? "full" : "not full");

  determine_exit_status(array_int_enqueue(queue, 1));

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_enqueue(queue, 2));

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_enqueue(queue, 3));

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_enqueue(queue, 4));

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_enqueue(queue, 5));

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_enqueue(queue, 6));

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_enqueue(queue, 7));

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_enqueue(queue, 8));

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_enqueue(queue, 9));

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_enqueue(queue, 10));

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  int dequeue_data;
  determine_exit_status(array_int_dequeue(queue, &dequeue_data));
  printf("dequeue: %d\n", dequeue_data);

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_dequeue(queue, &dequeue_data));
  printf("dequeue: %d\n", dequeue_data);

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_dequeue(queue, &dequeue_data));
  printf("dequeue: %d\n", dequeue_data);

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_dequeue(queue, &dequeue_data));
  printf("dequeue: %d\n", dequeue_data);

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_dequeue(queue, &dequeue_data));
  printf("dequeue: %d\n", dequeue_data);

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_dequeue(queue, &dequeue_data));
  printf("dequeue: %d\n", dequeue_data);

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_dequeue(queue, &dequeue_data));
  printf("dequeue: %d\n", dequeue_data);

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_dequeue(queue, &dequeue_data));
  printf("dequeue: %d\n", dequeue_data);

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_dequeue(queue, &dequeue_data));
  printf("dequeue: %d\n", dequeue_data);

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  determine_exit_status(array_int_dequeue(queue, &dequeue_data));
  printf("dequeue: %d\n", dequeue_data);

  array_int_queue_traverse(queue, queue_traverse);
  putchar('\n');

  array_int_queue_free(queue);

  return 0;
}
