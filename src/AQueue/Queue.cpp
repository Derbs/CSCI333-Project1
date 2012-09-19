#include <iostream>
#include "AQueue.h"

using std::cout;
using std::endl;

int main() {
  AQueue* cue = new AQueue(5);
  cue->enqueue(3);
  cue->enqueue(4);
  cue->enqueue(5);

  for(int i = 0; i<10; i++) {
    cue->enqueue(i);
    cout <<cue->size() << " ";
  }
  cout <<endl;
  for(int i = 0; i<5; i++) {
    cout << cue->dequeue() << " ";
  }
  cout << cue->dequeue() <<endl;
  cout << cue->dequeue() << endl;
  cout << cue->dequeue() << endl;
  return 0;
}
