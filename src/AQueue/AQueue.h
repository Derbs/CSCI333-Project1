#ifndef __AQUEUE_H__
#define __AQUEUE_H__

class AQueue {
  private:
    int* theQueue;
    int front;
    int back;
    int entries;
    int length;

  public:
    AQueue(int initSize = 10);
    ~AQueue();
    void enqueue(int value);
    int dequeue();
    bool isEmpty();
    int size();
};

#endif
