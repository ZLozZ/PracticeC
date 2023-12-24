#include <malloc.h>
#include "stdio.h"

typedef struct Node {
    int value;
    struct Node *pNext;
} Node_t;

typedef struct SingleList {
    Node_t *pHead;
} SingleList_t;

void intialize(SingleList_t *list) {
    list->pHead = NULL;
}

Node_t *CreateNode(int d) {
    Node_t *pNode = (Node_t *) malloc(sizeof(Node_t));
    if (pNode != NULL) {
        pNode->value = d;
        pNode->pNext = NULL;
    } else {
        printf("Error allocated memory");
    }
    return pNode;
}

void printList(SingleList_t list) {
    Node_t *pTmp = list.pHead;
    if (pTmp == NULL) {
        printf("The list is emptry");
        return;
    }
    while (pTmp != NULL) {
        printf("%d", pTmp->value);
        pTmp = pTmp->pNext;
    }
}

int sizeOfList(SingleList_t list){
    Node_t *pTmp = list.pHead;
    int nSize = 0;
    while(pTmp!=NULL){
        pTmp = pTmp->pNext;
        nSize++;
    }
    return nSize;
}

int main() {
    return 0;
}