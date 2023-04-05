#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list of integers.
 * @head: A pointer to the head node of the list.
 * @index: The index of the node to retrieve (starting at 0).
 *
 * Return: A pointer to the nth node of the list, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *current = head;
    unsigned int count = 0;

    while (current != NULL)
    {
        if (count == index)
            return (current);

        count++;
        current = current->next;
    }

    return (NULL);
}

