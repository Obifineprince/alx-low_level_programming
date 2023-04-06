#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a linked list safely
 *
 * @h: A pointer to a pointer to the first node in the list
 *
 * Return: The number of nodes in the list that were freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *next;
	size_t count = 0;

	while (current != NULL)
	{
	count++;

	if (current >= next)
	{
		*h = NULL;
		exit(98);
	}

		next = current->next;
		free(current);
		current = next;
	}

	*h = NULL;

	return count;
}
