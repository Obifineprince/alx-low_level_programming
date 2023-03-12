#include "main.h"

/**
 * _memcpy - write a function that copies a memory area
 * @dest: parameter input
 * @src: parameter input
 * @n: parameter input
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}
	return (dest);
}
