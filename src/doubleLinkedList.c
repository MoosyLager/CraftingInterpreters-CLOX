#include "doubleLinkedList.h"
#include <stdlib.h>

/**
 * @brief Adds newNode after the specified node in the doubly linked list
 * @param list
 * @param node
 * @param newNode
 */
void InsertAfterNode(DoublyLinkedList *list, DoublyLinkedNode *node, DoublyLinkedNode *newNode)
{
    if ( node == NULL || newNode == NULL ) {
        return;
    }

    newNode->prev = node;
    if ( node->next == NULL ) {
        newNode->next = NULL;
        list->tail = newNode;
    } else {
        newNode->next = node->next;
        node->next->prev = newNode;
    }
    node->next = newNode;
}

/**
 * @brief Adds newNode before the specified node in the doubly linked list
 * @param list
 * @param node
 * @param newNode
 */
void InsertBeforeNode(DoublyLinkedList *list, DoublyLinkedNode *node, DoublyLinkedNode *newNode)
{
    newNode->next = node;
    if ( node->next == NULL ) {
        newNode->next = NULL;
        list->tail = newNode;
    } else {
        newNode->prev = node->prev;
        node->prev->next = newNode;
    }
    node->prev = newNode;
}

/**
 * @brief Adds newNode to the head of the doubly linked list
 * @param list
 * @param newNode
 */
void InsertAtHead(DoublyLinkedList *list, DoublyLinkedNode *newNode)
{
    if ( list->head == NULL ) {
        list->head = newNode;
        list->tail = newNode;
        newNode->prev = NULL;
        newNode->next = NULL;
    } else {
        InsertBeforeNode(list, list->head, newNode);
    }
}

/**
 * @brief Adds newNode to the tail of the doubly linked list
 * @param list
 * @param newNode
 */
void InsertAtTail(DoublyLinkedList *list, DoublyLinkedNode *newNode)
{
    if ( list->tail == NULL ) {
        InsertAtHead(list, newNode);
    } else {
        InsertAfterNode(list, list->tail, newNode);
    }
}

/**
 * @brief Remote the specified node from the doubly linked list and free its memory
 * @param list
 * @param node
 */
void DeleteNode(DoublyLinkedList *list, DoublyLinkedNode *node)
{
    if ( node->prev = NULL ) {
        list->head = node->next;
    } else {
        node->prev->next = node->next;
    }
    if ( node->next == NULL ) {
        list->tail = node->prev;
    } else {
        node->next->prev = node->prev;
    }

    free(node);
}
