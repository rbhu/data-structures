#include "LinkedList.h"
#include <iostream>
using namespace std;

Node::Node (int data) {
    this -> data = data;
    this -> next = NULL;
}

// construct an empty list
SinglyLinkedList::SinglyLinkedList () { 
    head = NULL;
    tail = NULL;
}

// this should add an item to the end of the linked list
void SinglyLinkedList::add (int x) {
    Node *n = new Node(x);
    if (head == NULL) {
        head = n;
        tail = n;
    }
    else {
        Node *n = new Node(x);
        tail->next = n;
        tail = n;
    }
}  
    // display all the nodes in the linked list in order
void SinglyLinkedList::display () {
    Node *node_ptr = head;
    while (node_ptr != NULL) {
        cout << node_ptr->data << " --> ";
        node_ptr = node_ptr->next;
    }
    cout << endl;
}

void SinglyLinkedList::insertPosition(int pos, int newNodeVal) {
    Node *newNode = new Node(newNodeVal);
    Node *prevNodePointer = head;
    for (int i = 1; i < pos - 1; i++) {
        prevNodePointer = prevNodePointer->next;
    }
    newNode->next = prevNodePointer->next;
    prevNodePointer->next = newNode;
}

void SinglyLinkedList::insertEnd(int newNodeVal) {
    Node *newNode = new Node(newNodeVal);
    tail->next = newNode;
    tail = newNode;
}

void SinglyLinkedList::insertBeginning(int newNodeVal) {
    Node *newNode = new Node(newNodeVal);
    newNode->next = head;
    head = newNode;
}

void SinglyLinkedList::removePosition(int pos) {
    Node *prevNodePointer = head;
    for (int i = 1; i < pos - 1; i++) {
        prevNodePointer = prevNodePointer->next;
    }
    prevNodePointer->next = prevNodePointer->next->next;
}

void SinglyLinkedList::removeBeginning() {
    Node *tmp = head;
    head = head->next;
    delete tmp;
}


