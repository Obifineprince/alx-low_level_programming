#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node at a given position in a linked list of integers.
 * @head: A pointer to a pointer to the head node of the list.
 * @index: The index of the node to be deleted (starting at 0).
 *
 * Return: 1 if the operation succeeded, -1 if it failed.
 */
 

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);

}
