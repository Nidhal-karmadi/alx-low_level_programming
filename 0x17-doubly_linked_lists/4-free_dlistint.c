#include "lists.h"
#include <stdlib.h>

void free_dlistint(dlistint_t *head) {
    dlistint_t *current = head;
    dlistint_t *nextNode;

    while (current != NULL) {
        nextNode = current->next;
        free(current);
        current = nextNode;
    }
}

