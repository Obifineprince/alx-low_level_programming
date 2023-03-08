#include "main.h"

/**
 * _puts_recursion - WAF that prints a string, followed by a new line
 * @s: string input
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
