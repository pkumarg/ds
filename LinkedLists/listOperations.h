#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
}Node;


void printList(Node *pList);
void appendNode(Node **pList, int val);
void preappendNode(Node **pList);
void insertNode(Node *pList);
void deleteNode(Node **pList);
void swapNodes(Node **pList, int val1, int val2);
