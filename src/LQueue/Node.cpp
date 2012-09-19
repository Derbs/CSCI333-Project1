#include "Node.h"
#include "assert.h"
#include <iostream>

Node::Node() {
  value = 0;
  next = 0;
}

Node::Node(int val) {
  value = val;
  next = 0;
}
Node::Node(Node* nxt, int val) {
  next = nxt;
  value = val;
}

Node::~Node() {
  
}

void Node::setNext(Node* nxt) {
  next = nxt;
}

void Node::setValue(int val) {
  value = val;
}

Node* Node::getNext() {
  return next;
}

int Node::getValue() {
  return value;
}

