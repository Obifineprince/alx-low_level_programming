#include "lists.h"
#include <stdlib.h>
 /**
 * insert_nodeint_at_index - Inserts a new node at a given position in a linked list of integers.
 * @head: A pointer to a pointer to the head node of the list.
 * @idx: The index of the list where the new node should be added (starting at 0).
 * @n: The integer data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if the operation failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
