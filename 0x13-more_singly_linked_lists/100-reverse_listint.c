#include "lists.h"

/**
 * reverse_listint - Reverses a linked list of integers.
 *
 * @head: A pointer to a pointer to the first node of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (!head || !*head)
		return (NULL);

	if (!(*head)->next)
		return (*head);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
