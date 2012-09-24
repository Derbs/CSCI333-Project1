#include "Node.h"
#include <iostream>
#include "assert.h"

using std::cout;
using std::endl;

int main() {
  Node* a = new Node();
  Node* b = new Node(a,5);
  Node* c = new Node(b,3);
  Node* d = new Node(c,2);
  cout << d->getValue() <<endl;
  cout << d->getNext()->getNext()->getValue() << endl;
  return 0;
}
