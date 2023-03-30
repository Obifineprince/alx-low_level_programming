#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: head of linked list_t list
 *
 * Return: number of elements in linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return count;
}
