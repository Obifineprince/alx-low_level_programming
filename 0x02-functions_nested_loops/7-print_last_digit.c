#include "main.h"

/**
 *  print_last_digit - Write a function that prints the last digit of a number
 *  @n: parameter to be printed
 *  written by ifeanyi obi
 *  Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
