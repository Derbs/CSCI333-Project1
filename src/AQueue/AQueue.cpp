#include "AQueue.h"
#include <iostream>
#include "assert.h"

AQueue::AQueue(int initSize) {
  theQueue = new int[initSize];
  front = 0;
  back = -1;
  entries = 0;
  length = initSize;
}

AQueue::~AQueue() {
  delete[] theQueue;
}

void AQueue::enqueue(int value) {
  assert(entries<=length);
    //if we reach capacity, lets go ahead and resize::
  if(entries==length) {  //if we have reached the capacity of the array...
    int* holder = theQueue;  //point to the old version of theQueue;
    theQueue = new int[length*2];  //create a new array twice of the size of the old array at theQueue
    //keep the queue in order from front to back, but redefine front to be 0 and move the entire queue to the 'front' of the actual 'theQueue' array.
    for(int i = 0; i<entries; i++) {
      theQueue[i] = holder[front];
      front = (front+1)%length;
    }
    front = 0; 
    length = 2*length;
    back = entries-1;
    delete[] holder;
  }
    //if we go to 1/4 capacity, half the size of the cue.  
  double fullness = entries/length;
  if(fullness == .25) {
    int* holder = theQueue;
    theQueue = new int[length/2];
    for(int i = 0; i<entries; i++) {
      theQueue[i] = holder[front];
      front = (front+1)%length;
    }
    front = 0;
    length = length/2;
    back = entries-1;
    delete[] holder;
  }
  
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
  if(entries==0) return true;
  else return false;
}

int AQueue::size() {
  return entries;
}
