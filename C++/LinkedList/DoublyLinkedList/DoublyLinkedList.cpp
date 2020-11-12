#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
    Node (int x) {
        this->data = x;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList {
    Node *head;
    Node *tail;
public:
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void add(int x) {
        Node *newNode = new Node(x);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

        void display () {
        Node *node_ptr = head;
        while (node_ptr != NULL) {
            cout << node_ptr->data << " --> ";
            node_ptr = node_ptr->next;
        }
        cout << endl;
    }
};

int main () {
    DoublyLinkedList dl;
    dl.add(1);
    dl.add(2);
    dl.add(3);
    dl.display();
}