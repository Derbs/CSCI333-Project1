#include "ListQueue.h"
#include "assert.h"


ListQueue::ListQueue() {
  theQueue = new std::list<int>();
  entries = 0;
}

ListQueue::~ListQueue() {
  delete theQueue;
}

int ListQueue::dequeue() {
  assert(entries > 0);
  entries--;
  int result = theQueue->front();
  theQueue->pop_front();
  return result;
}

void ListQueue::enqueue(int val) {
  theQueue->push_back(val);
  entries++;
}

int ListQueue::size() {
  return entries;
}

bool ListQueue::isEmpty() {
  if(entries==0) return true;
  else return false;
}
