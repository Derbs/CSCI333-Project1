#include "AQueue.h"
#include <iostream>
#include "assert.h"

AQueue::AQueue(int initSize) {
  theQueue = new int[initSize];
  front = 0;
  back = 0;
  entries = 0;
  length = initSize;
}

AQueue::~AQueue() {
  delete[] theQueue;
}

void AQueue::enqueue(int value) {
  back = (back+1)%length;
  theQueue[back] = value;
  entries++;
}

int AQueue::dequeue() {
  assert(entries!=0);
  int value = theQueue[front];
  front = (front+1)%length;
  entries--;
  return value;
}

bool AQueue::isEmpty() {
  return false;
}

int AQueue::size() {
  return entries;
}
