#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 * @c: input
 * Return: (0)
 */

char *leet(char *c)
{
	int i, j;

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(c + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == c[i])
				c[i] = b[j];
		}
	}
	return (c);
}
