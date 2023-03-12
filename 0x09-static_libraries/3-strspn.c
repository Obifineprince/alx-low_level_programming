#include "main.h"

/**
 * _strspn - write a function that gets the lenght of a prefix substring
 * @s: parameter input
 * @accept: parameter input
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int j = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
				j++;
			}
		}
		else
			return (j);

	}
	return (j);
}
