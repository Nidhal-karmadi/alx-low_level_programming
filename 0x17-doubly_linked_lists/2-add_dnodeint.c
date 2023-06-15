#include "lists.h"
#include <stdlib.h>

dlistint_t *add_dnodeint(dlistint_t **head, const int n) {
    // Create a new node
    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL) {
        // Failed to allocate memory for the new node
        return NULL;
    }

    // Set the data of the new node
    newNode->n = n;

    // Update the pointers of the new node
    newNode->prev = NULL;
    newNode->next = *head;

    // Update the previous pointer of the current head if it exists
    if (*head != NULL) {
        (*head)->prev = newNode;
    }

    // Update the head pointer to point to the new node
    *head = newNode;

    return newNode;
}

