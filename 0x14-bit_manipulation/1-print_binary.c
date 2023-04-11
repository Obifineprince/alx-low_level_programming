#include "main.h"

#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary form
 */

void print_binary(unsigned long int n)
{

	unsigned long int mask = 1;
	unsigned int bits = sizeof(unsigned long int) * 8;

	mask <<= bits - 1;

	while (mask > 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');

		mask >>= 1;
	}
}
