#include "Node.h"
#include "LQueue.h"
#include "assert.h"

#include <iostream>

using std::cout;

LQueue::LQueue() {
  front = new Node(0);
  entries = 0;
}

LQueue::~LQueue() {
  while(!isEmpty()) {
    cout << dequeue();
  }
}

int LQueue::dequeue() {
  assert(entries>0);
  int value = front->getValue();
  Node* toBeDeleted = front;
  front = front->getNext();
  delete toBeDeleted;
  entries--;
  return value;
}

void LQueue::enqueue(int val) {
  if(entries == 0) {
    front->setValue(val);
  }
  else if(entries == 1) {
    front->setNext(new Node(val));
    back = front->getNext();
  }
  else {
    back->setNext(new Node(val));
    back = back->getNext();
  }
  entries++;  
}

int LQueue::size() {
  return entries;
}

bool LQueue::isEmpty() {
  if(entries > 0) return false;
  else return true;
}
