#include "main.h"

/**
 *  print_diagonal - draws a diagonal line on the terminal.
 *  @n: input
 *  Return: \n if n is 0 or less
 */

void print_diagonal(int n)
{
	int d, l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 1; d <= n; d++)
		{
			for (l = 1; l < d; l++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
