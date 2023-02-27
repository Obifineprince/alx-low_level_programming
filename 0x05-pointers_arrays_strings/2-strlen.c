#include "main.h"

/**
 *  _strlen - Write a function that returns the length of a string
 *  @s: length of string
 *  Return: length of a string
 */

int _strlen(char *s)
{

	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
