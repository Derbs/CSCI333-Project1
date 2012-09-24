#include <iostream>
#include "LQueue.h"
#include "Node.h"

using std::cout;
using std::endl;

int main() {
  LQueue* test = new LQueue();
  test->enqueue(5);
  test->enqueue(2);
  cout << test->dequeue() <<endl;
  cout << test->dequeue() << endl;
}
