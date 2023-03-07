#include "main.h"

/**
 * _strchr - write a function that locates a character in a string
 * @s: pointer parameter
 * @c: integer character
 * Return: pointer to the first occurance to the character c or null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return ('\0');
}
