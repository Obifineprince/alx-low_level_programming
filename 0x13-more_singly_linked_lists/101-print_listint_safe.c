#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a linked list safely
 *
 * @head: A pointer to the first node in the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *check;
	size_t count = 0;

	while (current != NULL)
	{
	count++;
	printf("[%p] %d\n", (void *) current, current->n);

	check = current->next;
	while (check != NULL)
	{
		if (check == current)
	{
		printf("-> [%p] %d\n", (void *) check, check->n);
		exit(98);
	}
	check = check->next;
	}

	current = current->next;
	}

	return count;
}
