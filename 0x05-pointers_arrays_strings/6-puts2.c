#include "main.h"

/**
 * puts2 -  prints every other character of a string with the first character
 * @str: character of a string
 * Return: 0
 */

void puts2(char *str)
{

	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		_putchar(str[string]);
	_putchar('\n');
}
