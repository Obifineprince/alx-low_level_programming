#include "main.h"

/**
 * print_alphabet_x10 - print *10 the alphabet from a to z
 * is written by ifeanyi obi
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char al;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (al = 'a' ; al <= 'z' ; al++)
			_putchar(al);
		_putchar('\n');
	}
}
