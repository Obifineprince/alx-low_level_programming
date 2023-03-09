#include "main.h"

/**
 * factorial - WAF that prints the factorial of a given number
 * @n: input
 * Return: -1 if n is less than 0
 */
int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
			return (x);
}
