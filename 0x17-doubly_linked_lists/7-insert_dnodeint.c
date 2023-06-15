#include "lists.h"
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
    // Check if the head is NULL and the index is 0
    if (*h == NULL && idx == 0) {
        return add_dnodeint(h, n);
    }

    // Create a new node
    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL) {
        // Failed to allocate memory for the new node
        return NULL;
    }
    newNode->n = n;

    // If the index is 0, insert at the beginning of the list
    if (idx == 0) {
        newNode->prev = NULL;
        newNode->next = *h;
        if (*h != NULL) {
            (*h)->prev = newNode;
        }
        *h = newNode;
        return newNode;
    }

    // Traverse to the position before the desired index
    dlistint_t *current = *h;
    unsigned int count = 0;
    while (current != NULL && count < idx - 1) {
        current = current->next;
        count++;
    }

    // Check if it is not possible to add the new node at the given index
    if (current == NULL || current->next == NULL) {
        free(newNode);
        return NULL;
    }

    // Insert the new node between current and current->next
    newNode->prev = current;
    newNode->next = current->next;
    current->next->prev = newNode;
    current->next = newNode;

    return newNode;
}

