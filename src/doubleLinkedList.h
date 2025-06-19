#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

typedef struct {
    int data;
    DoublyLinkedNode* next;
    DoublyLinkedNode* prev;
} DoublyLinkedNode;

typedef struct {
    DoublyLinkedNode* head;
    DoublyLinkedNode* tail;
} DoublyLinkedList;

void InsertAfterNode(DoublyLinkedList* list, DoublyLinkedNode* node, DoublyLinkedNode* newNode);
void InsertBeforeNode(DoublyLinkedList* list, DoublyLinkedNode* node, DoublyLinkedNode* newNode);
void InsertAtHead(DoublyLinkedList* list, DoublyLinkedNode* newNode);
void InsertAtTail(DoublyLinkedList* list, DoublyLinkedNode* newNode);
void DeleteNode(DoublyLinkedList* list, DoublyLinkedNode* node);

#endif