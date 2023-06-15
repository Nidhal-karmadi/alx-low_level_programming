#include "lists.h"
#include <stdlib.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) {
    // Create a new node
    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL) {
        // Failed to allocate memory for the new node
        return NULL;
    }

    // Set the data of the new node
    newNode->n = n;

    // Set the next pointer of the new node to NULL
    newNode->next = NULL;

    // If the list is empty, the new node becomes the head
    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
    } else {
        // Traverse to the last node
        dlistint_t *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }

        // Update the pointers of the new node and the last node
        newNode->prev = current;
        current->next = newNode;
    }

    return newNode;
}

