#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data in a dlistint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    int sum = 0;

    while (current != NULL)
    {
        sum += current->n;
        current = current->next;
    }

    return sum;
}

