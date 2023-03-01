#include "main.h"

/**
 * _strncpy - Write a function that copies a string.
 * @dest: parameter input
 * @src: parameter input
 * @n: parameter input
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
