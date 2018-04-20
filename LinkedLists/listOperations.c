#include "listOperations.h"

void printList(Node *pList)
{
    while(pList)
    {
	printf("%d ", pList->val);
	pList = pList->next;
    }

    printf("\n");
}

void appendNode(Node **pList, int val)
{
    // Allocate the node
    Node *pNode = (Node *)malloc(sizeof(Node));
    pNode->val = val;
    pNode->next = NULL;

    // Case of empty list
    if(*pList == NULL)
    {
	*pList = pNode;
	return;
    }

    Node *tempNode = *pList;

    while(tempNode->next != NULL)
    {
	tempNode = tempNode->next;
    }

    tempNode->next = pNode;
}

void swapNodes(Node **pList, int val2, int val2)
{
}
