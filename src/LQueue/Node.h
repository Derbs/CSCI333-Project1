#ifndef __NODE_H__
#define __NODE_H__

class Node {
  private:
    int value;
    Node* next;

  public: 
    Node(int val = 0);
    ~Node();
    void setNext(Node* nxt);
    void setValue(int val);
    Node* getNext();
    int getValue();
};


#endif
