//
// Created by joonseok kim on 2024. 10. 11..
//

#include "array-queue.h"

#include <stdlib.h>

ArrayIntQueue* array_int_queue_create(unsigned int size) {
  ArrayIntQueue* new_queue = (ArrayIntQueue*) malloc(sizeof(ArrayIntQueue));

  new_queue->size = size;
  new_queue->front = new_queue->rear = -1;
  new_queue->queue = (int*) malloc(sizeof(int) * size);

  return new_queue;
}

bool array_int_queue_is_full(ArrayIntQueue* queue) {
  return queue->front == queue->size - 1;
}

bool array_int_queue_is_empty(ArrayIntQueue* queue) {
  return queue->front == queue->rear;
}

int array_int_enqueue(ArrayIntQueue* queue, int data) {
  if (array_int_queue_is_full(queue)) {
    return -1;
  }

  queue->queue[++queue->front] = data;
  return 0;
}

int array_int_dequeue(ArrayIntQueue* queue, int* target) {
  if (array_int_queue_is_empty(queue)) {
    return -1;
  }

  *target = queue->queue[++queue->rear];
  return 0;
}

void array_int_queue_traverse(ArrayIntQueue* queue, void (*cb)(int)) {
  int* data = queue->queue;
  for (int i = queue->front; i > queue->rear; --i) {
    cb(data[i]);
  }
}

void array_int_queue_free(ArrayIntQueue* queue) {
  free(queue->queue);
  free(queue);
}
