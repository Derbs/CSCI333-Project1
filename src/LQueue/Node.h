#ifndef __NODE_H__
#define __NODE_H__

class Node {
  private:
    int value;
    Node* next;

  public: 
    Node();
    Node(int val = 0);
    Node(Node* nxt = 0, int val = 0);
    ~Node();
    void setNext(Node* nxt);
    void setValue(int val);
    Node* getNext();
    int getValue();
};


#endif
