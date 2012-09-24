#ifndef __LQUEUE_H__
#define __LQUEUE_H__

#include "Node.h"

class LQueue {
  private:
    Node* front;
    Node* back;
    int entries;
  public:
    LQueue(Node* frnt = 0);
    ~LQueue();
    int dequeue();
    void enqueue();
    int size();
    bool isEmpty();
};

#endif
