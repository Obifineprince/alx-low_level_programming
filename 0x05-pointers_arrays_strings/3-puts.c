#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str: parameter input
 * Return: 0;
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}