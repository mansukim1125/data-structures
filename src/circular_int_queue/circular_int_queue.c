//
// Created by joonseok kim on 2024. 10. 12..
//

#include "circular_int_queue.h"

#include <stdlib.h>

int circular_int_queue_create_queue(unsigned int size, CircularIntQueue** queue) {
  CircularIntQueue* new_queue = (CircularIntQueue*) malloc(sizeof(CircularIntQueue));
  if (new_queue == NULL) return -1;

  new_queue->front = new_queue->rear = 0;
  new_queue->size = size + 1;
  new_queue->data = (int*) malloc(sizeof(int) * (size + 1));

  *queue = new_queue;

  return 0;
}

bool circular_int_queue_is_full(CircularIntQueue* queue) {
  return (queue->rear + 1) % queue->size == queue->front;
}

bool circular_int_queue_is_empty(CircularIntQueue* queue) {
  return queue->rear == queue->front;
}

int circular_int_queue_enqueue(CircularIntQueue* queue, int data) {
  if (circular_int_queue_is_full(queue)) {
    return -1;
  }

  queue->data[queue->rear++] = data;

  return 0;
}

int circular_int_queue_dequeue(CircularIntQueue* queue, int* target) {
  if (circular_int_queue_is_empty(queue)) {
    return -1;
  }

  *target = queue->data[queue->front++];

  return 0;
}

int circular_int_queue_free(CircularIntQueue* queue) {
  free(queue->data);
  free(queue);
  return 0;
}

void circular_int_queue_traverse(CircularIntQueue* queue, void (*cb) (int)) {
  int queue_size = queue->size;
  for (int i = queue->front; i != queue->rear; i = (i + 1) % queue_size) {
    cb(queue->data[i]);
  }
}
