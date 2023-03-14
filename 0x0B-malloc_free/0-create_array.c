#include "main.h"
#include <stdlib.h>

/**
 * create_array - WAF  that creates an array of chars,
 * and initializes it with a specific char
 * @size: input parameter
 * @c: input parameter
 * Returns: NULL if size is = 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i =  0; i < size; i++)
		arr[i] = c;

	return (arr);



}

