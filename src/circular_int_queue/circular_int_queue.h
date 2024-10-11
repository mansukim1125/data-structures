//
// Created by joonseok kim on 2024. 10. 12..
//

#ifndef CIRCULAR_INT_QUEUE_H
#define CIRCULAR_INT_QUEUE_H

typedef struct _circularIntQueue {
  unsigned int size;
  int* data;
  int front;
  int rear;
} CircularIntQueue;



#endif //CIRCULAR_INT_QUEUE_H
