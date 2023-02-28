#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * @dest: parameter input
 * @src: parameter input
 * Return: value of pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
