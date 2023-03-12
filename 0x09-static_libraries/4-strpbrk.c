#include "main.h"

/**
 * _strpbrk - write a function that searches a string for any set of bytes
 * @s: parameter input
 * @accept: parameter input
 * Return: return a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return ('\0');
}
