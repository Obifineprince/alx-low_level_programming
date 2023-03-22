#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - applies a given function to each element of an array.
 * @array: the array it iterate over
 * @size: the size of array
 * @action: the function to apply in each element of array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for ( i = 0; i < size; i++)
		action(array[i]);
}
