#include <iostream>
#include "AQueue.h"

using std::cout;
using std::endl;

int main() {
  AQueue cue = AQueue(5);
  cue.enqueue(3);
  cue.enqueue(4);
  cue.enqueue(5);

  cout << cue.dequeue() <<endl;
  cout << cue.dequeue() << endl;
  cout << cue.dequeue() << endl;
  return 0;
}
