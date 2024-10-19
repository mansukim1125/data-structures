//
// Created by joonseok kim on 2024. 10. 12..
//

#ifndef CIRCULAR_INT_QUEUE_H
#define CIRCULAR_INT_QUEUE_H

#include <stdbool.h>

typedef struct _circularIntQueue {
  unsigned int size;
  int* data;
  int front;
  int rear;
} CircularIntQueue;

int circular_int_queue_create_queue(unsigned int size, CircularIntQueue** queue);

bool circular_int_queue_is_full(CircularIntQueue* queue);

bool circular_int_queue_is_empty(CircularIntQueue* queue);

int circular_int_queue_enqueue(CircularIntQueue* queue, int data);

int circular_int_queue_dequeue(CircularIntQueue* queue, int* target);

int circular_int_queue_free(CircularIntQueue* queue);

void circular_int_queue_traverse(CircularIntQueue* queue, void (*cb) (int));

#endif //CIRCULAR_INT_QUEUE_H
