#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a comparison function
 * @array: the array of integers to search
 * @size: the number of elements in the array
 * @cmp: the comparison function to use
 *
 * Return: the index of the first element for which cmp returns non-zero,
 *         or -1 if no such element is found or if size is 0 or negative.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);

}
