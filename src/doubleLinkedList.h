#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

typedef struct DoublyLinkedNode{
    int data;
    struct DoublyLinkedNode* next;
    struct DoublyLinkedNode* prev;
};

typedef struct DoublyLinkedList{
    struct DoublyLinkedNode* head;
    struct DoublyLinkedNode* tail;
};

#endif