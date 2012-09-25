#include <iostream>
#include "LQueue.h"
#include "Node.h"

using std::cout;
using std::endl;

int main() {
  LQueue* test = new LQueue();
  test->enqueue(5);
  test->enqueue(2);
  test->enqueue(3);
  for(int i = 5; i>0; i--) {
    cout << test->dequeue() << endl;
  }
}
