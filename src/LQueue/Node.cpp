#include "Node.h"
#include "assert.h"
#include <iostream>

Node::Node(int val) {
  next = 0;
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

