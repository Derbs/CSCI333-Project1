#include <iostream>
#include "ListQueue.h"

using std::cout;
using std::endl;

int main() {
  ListQueue* test = new ListQueue();
  test->enqueue(5);
  test->enqueue(2);
  test->enqueue(3);
  test->enqueue(2);
  test->enqueue(1);
  for(int i = 5; i>0; --i) {
    cout << test->dequeue() << endl;
  }
  test->enqueue(7);
  cout << "Queued 7, size should be 1." << endl;
  test->enqueue(21);
  cout << "Queued 21, size should be 2." <<endl;
  test->dequeue();
  cout << "Dequeued 7.  Size should be 1 after this." << endl;
  test->dequeue();
  cout << "dequeued 21.  Size should be 0 after this.  Should print out 1." << endl;
  test->enqueue(5);
  test->enqueue(3);
  delete test;
}
