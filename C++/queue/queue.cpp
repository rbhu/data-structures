#include <iostream>
#include "../LinkedList/SinglyLinkedList/LinkedList.h"

class Queue : public SinglyLinkedList {

public:
    Queue () {
        SinglyLinkedList();
    }

    void enqueue(int x) {
        add(x);
    }
    
    void dequeue() {
        removeBeginning();
    }

};

int main () {
    Queue q;
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.dequeue();
    q.display();
}