#include "listOperations.h"

// Global home node pointer
Node *homeNode = NULL;

int main()
{
    const int NUM_ELEMENTS = 10;
    printf("Creating linked list of %d random elements\n", NUM_ELEMENTS);

    for(int iter = 0; iter < NUM_ELEMENTS; iter++)
    {
	appendNode(&homeNode, (rand() % 100));
    }

    printList(homeNode);

    // Test node swaping
    int val1 = 0;
    int val2 = 0;
    printf("Swap nodes: ");
    scanf("%d%d", &val1, &val2);
    swapNodes(&homeNode, val1, val2);
    printList(homeNode);

    return 0;
}
