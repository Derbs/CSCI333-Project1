#ifndef __LISTQUEUE_H__
#define __LISTQUEUE_H__

#include <list>
#include <iostream>
class ListQueue {
  private:
    std::list<int>* theQueue;
    int entries;
  public:
    ListQueue();
    ~ListQueue();
    int dequeue();
    void enqueue(int val);
    int size();
    bool isEmpty();
};
#endif
