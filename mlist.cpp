//
// Created by konrad on 05.02.17.
//

#include "mlist.h"


void mlist::insert(Node *node, const size_t index) {
    Node** current = &head;
    for(int i = 0; *current && i < index; ++i)
        current = &(*current)->next;
    node->next = *current;
    *current = node;
}

Node *mlist::remove(const size_t index) {
    Node** current = &head;
    for(int i = 0; *current && i < index; ++i)
        current = &(*current)->next;
    if(!*current)
        return nullptr;
    Node* deleted = *current;
    *current = deleted->next;
    deleted->next = nullptr;
    return deleted;
}