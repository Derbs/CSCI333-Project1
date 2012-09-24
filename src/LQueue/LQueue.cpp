#include "Node.h"
#include "LQueue.h"

LQueue::LQueue(Node* frnt) {
  front = frnt;
}

LQueue::~LQueue() {

}

int LQueue::dequeue() {
  int val = front.getValue();
    
}
