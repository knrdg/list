#include <iostream>
#include "mlist.h"

using namespace std;

int main() {
    mlist l;

    Node* n1 = new Node; n1->value = 0;
    Node* n2 = new Node; n2->value = 1;
    Node* n3 = new Node; n3->value = 2;
    Node* n4 = new Node; n4->value = 3;
    Node* n5 = new Node; n5->value = 4;

    l.insert(n1);
    l.insert(n2, 1);
    l.insert(n3, 9);
    l.insert(n4, 9);
    l.insert(n5, 2);

    l.remove(1);
    l.remove(6);


    cout << endl;

    delete n1; delete n2; delete n3; delete n4; delete n5;
    return 0;
}