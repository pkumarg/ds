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

void swapNodes(Node **pList, int val1, int val2)
{
    Node *node1 = *pList;
    Node *node2 = *pList;
    Node *prevNode1 = NULL;
    Node *prevNode2 = NULL;
    Node *afterNode1 = NULL;
    Node *afterNode2 = NULL;
    int tempVal = 0;

    printf("Swapping values %d and %d\n", val1, val2);

    // Trace first occurrence of values to be swapped
    while(node1)
    {
	if((node1->val == val1) || (node1->val == val2))
	{
	    afterNode1 = node1->next;
	    tempVal = node1->val;
	    break;
	}

	prevNode1 = node1;
	node1 = node1->next;
    }

    if(tempVal == val1)
	tempVal = val2;
    else
	tempVal = val1;

    if(!afterNode1)
    {
	printf("Either or both of the values not found\n");
	return;
    }

    node2 = afterNode1;
    prevNode2 = node1;

    // Trace second occurrence of values to be swapped
    while(node2)
    {
	if(node2->val == tempVal)
	{
	    afterNode2 = node2->next;
	    break;
	}

	prevNode2 = node2;
	node2 = node2->next;
    }

    if(!node2)
    {
	printf("Value=%d not found\n", tempVal);
	return;
    }

    prevNode2->next = node1;
    node1->next = afterNode2;
    if(prevNode1)
    {
	prevNode1->next= node2;
    }
    else
    {
	*pList = node2;
    }

    if(node2 == afterNode1)
    {
	node2->next = node1;
    }
    else
    {
	node2->next = afterNode1;
    }
}
