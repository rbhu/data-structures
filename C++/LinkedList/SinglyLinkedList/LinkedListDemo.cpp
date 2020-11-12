#include "LinkedList.h"

int main () {
    SinglyLinkedList ll;
    ll.add(1);
    ll.add(2);
    ll.add(3);
    ll.display();
    ll.insertPosition(2, 100);
    ll.display();
    ll.insertBeginning(40);
    ll.display();
    ll.removePosition(1);
    ll.removePosition(4);
    ll.display();
    return 0;
}