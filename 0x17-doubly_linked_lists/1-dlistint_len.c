#include "lists.h"

size_t dlistint_len(const dlistint_t *h) {
    const dlistint_t *current = h;
    size_t nodeCount = 0;

    while (current != NULL) {
        nodeCount++;
        current = current->next;
    }

    return nodeCount;
}

