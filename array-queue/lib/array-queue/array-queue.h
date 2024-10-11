//
// Created by joonseok kim on 2024. 10. 11..
//

#ifndef ARRAY_QUEUE_H
#define ARRAY_QUEUE_H
#include <stdbool.h>

typedef struct _arrayIntQueue {
  unsigned int size;
  int front;
  int rear;
  int* queue;
} ArrayIntQueue;

ArrayIntQueue* array_int_queue_create(unsigned int size);

int array_int_enqueue(ArrayIntQueue* queue, int data);

int array_int_dequeue(ArrayIntQueue* queue, int* target);

bool array_int_queue_is_full(ArrayIntQueue* queue);

bool array_int_queue_is_empty(ArrayIntQueue* queue);

void array_int_queue_traverse(ArrayIntQueue* queue, void (*cb)(int));

void array_int_queue_free(ArrayIntQueue* queue);

#endif //ARRAY_QUEUE_H
