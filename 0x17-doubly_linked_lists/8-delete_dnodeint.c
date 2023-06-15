#include "lists.h"
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
    if (*head == NULL)
        return -1;

    dlistint_t *current = *head;

    // If index is 0, delete the head node
    if (index == 0) {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    // Traverse to the node at the desired index
    unsigned int count = 0;
    while (count < index && current != NULL) {
        current = current->next;
        count++;
    }

    // If current is NULL, index is out of bounds
    if (current == NULL)
        return -1;

    // Update the previous node's next pointer
    if (current->prev != NULL)
        current->prev->next = current->next;

    // Update the next node's previous pointer
    if (current->next != NULL)
        current->next->prev = current->prev;

    free(current);
    return 1;
}

