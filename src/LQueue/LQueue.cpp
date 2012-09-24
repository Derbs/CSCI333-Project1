#include "Node.h"
#include "LQueue.h"
#include "assert.h"

LQueue::LQueue(Node* frnt) {
  front = frnt;
  back = frnt;
}

LQueue::~LQueue() {

}

int LQueue::dequeue() {
  assert(front!=0);
  int val = front->getValue();
  Node* oldFront = front;
  front = front->getNext();
  delete oldFront;
  entries--;
  return val;
}

void LQueue::enqueue(int val) {
  Node* oldBack = back;
  back = new Node(0, val);
  oldBack->setNext(back);
  entries++;
}

int LQueue::size() {
  return entries;
}

bool LQueue::isEmpty() {
  if(entries > 0) return false;
  else return true;
}
