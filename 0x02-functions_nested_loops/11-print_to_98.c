#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: numbers from n to 98 to be printed
 * written by ifeanyi obi
 * Return: 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);

	}	printf("%d\n", 98);
}
