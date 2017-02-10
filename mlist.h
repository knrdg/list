//
// Created by konrad on 05.02.17.
//

#ifndef SLLIST_MLIST_H
#define SLLIST_MLIST_H

#include <iostream>

struct Node {
    int value;
    Node* next;
};

class mlist {
    Node* head = nullptr;
public:
    void insert(Node* node, const std::size_t index = 0);
    Node* remove(const std::size_t index = 0);
    void sort();
};


#endif //SLLIST_MLIST_H
