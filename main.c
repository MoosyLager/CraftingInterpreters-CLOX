#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include "src/doubleLinkedList.h"

int main(void){
    DoublyLinkedList* list = calloc(1, sizeof(DoublyLinkedList));
    DoublyLinkedNode* node1 = calloc(1, sizeof(DoublyLinkedNode));
    DoublyLinkedNode* node2 = calloc(1, sizeof(DoublyLinkedNode));
    DoublyLinkedNode* node3 = calloc(1, sizeof(DoublyLinkedNode));

    printf("Hello, World!\n");

    free(list);
    free(node1);
    free(node2);
    free(node3);
    return 0;
}