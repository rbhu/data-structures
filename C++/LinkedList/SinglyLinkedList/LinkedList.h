#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

struct Node {
    int data;
    Node* next;
    Node (int data);
};

class SinglyLinkedList {
private:
    Node *head, *tail;
public:
    SinglyLinkedList();
    void add(int x);
    void display();
    void insertPosition(int post, int newNodeVal);
    void insertEnd(int newNodeVal);
    void insertBeginning(int newNodeVal);
    void removePosition(int pos);
    void removeBeginning();
};

#endif