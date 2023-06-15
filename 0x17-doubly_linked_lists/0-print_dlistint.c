#include "lists.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h) {
	const dlistint_t *current = h;
	size_t nodeCount = 0;
	
	while (current != NULL) {
	printf("%d\n", current->n);
	current = current->next;
        nodeCount++;
    }

    return nodeCount;
}

