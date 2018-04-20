#include "listOperations.h"

// Global home node pointer
Node *homeNode = NULL;

int main()
{
    printf("Creating linked list of 20 random elements\n");

    for(int iter = 0; iter < 20; iter++)
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
    printf("Swapped list: ");
    printList(homeNode);

    return 0;
}
