#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - computes the sum of all its parameters
 * @n: the number of parameters to sum
 * @...: the variable arguments to sum
 *
 * Return: the sum of all the parameters
 *         If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
