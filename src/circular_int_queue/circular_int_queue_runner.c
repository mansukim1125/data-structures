//
// Created by joonseok kim on 2024. 10. 12..
//

#include "circular_int_queue_runner.h"

#include <stdio.h>

#include "circular_int_queue.h"

void print_queue(int data) {
  printf("%d ", data);
}

void print_array(int* arr, int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d ", arr[i]);
  }
  putchar('\n');
}

int circular_int_queue_runner(void) {
  CircularIntQueue* queue;
  circular_int_queue_create_queue(5, &queue); // rear = 0, front = 0;

  circular_int_queue_enqueue(queue, 1); // rear = 1, front = 0;
  circular_int_queue_traverse(queue, print_queue);
  // print_array(queue->data, queue->size);
  putchar('\n');

  circular_int_queue_enqueue(queue, 2); // rear = 2, front = 0;
  circular_int_queue_traverse(queue, print_queue);
  // print_array(queue->data, queue->size);

  putchar('\n');

  circular_int_queue_enqueue(queue, 3); // rear = 3, front = 0;
  circular_int_queue_traverse(queue, print_queue);
  // print_array(queue->data, queue->size);

  putchar('\n');

  circular_int_queue_enqueue(queue, 4); // rear = 4, front = 0;
  circular_int_queue_traverse(queue, print_queue);
  // print_array(queue->data, queue->size);

  putchar('\n');

  circular_int_queue_enqueue(queue, 5); // rear = 0, front = 0;
  circular_int_queue_traverse(queue, print_queue);
  // print_array(queue->data, queue->size);

  putchar('\n');

  circular_int_queue_enqueue(queue, 6); // rear = 0, front = 0;
  circular_int_queue_traverse(queue, print_queue);
  // print_array(queue->data, queue->size);

  putchar('\n');

  int dequeued_item;
  circular_int_queue_dequeue(queue, &dequeued_item);
  printf("dequeued: %d\n", dequeued_item);
  circular_int_queue_traverse(queue, print_queue);

  putchar('\n');

  circular_int_queue_dequeue(queue, &dequeued_item);
  printf("dequeued: %d\n", dequeued_item);
  circular_int_queue_traverse(queue, print_queue);

  putchar('\n');

  circular_int_queue_dequeue(queue, &dequeued_item);
  printf("dequeued: %d\n", dequeued_item);
  circular_int_queue_traverse(queue, print_queue);

  putchar('\n');

  circular_int_queue_dequeue(queue, &dequeued_item);
  printf("dequeued: %d\n", dequeued_item);
  circular_int_queue_traverse(queue, print_queue);

  putchar('\n');

  circular_int_queue_dequeue(queue, &dequeued_item);
  printf("dequeued: %d\n", dequeued_item);
  circular_int_queue_traverse(queue, print_queue);

  putchar('\n');

  circular_int_queue_dequeue(queue, &dequeued_item);
  printf("dequeued: %d\n", dequeued_item);
  circular_int_queue_traverse(queue, print_queue);

  putchar('\n');

  circular_int_queue_dequeue(queue, &dequeued_item);
  printf("dequeued: %d\n", dequeued_item);
  circular_int_queue_traverse(queue, print_queue);

  putchar('\n');

  // print_array(queue->data, queue->size);

  circular_int_queue_free(queue);
}
