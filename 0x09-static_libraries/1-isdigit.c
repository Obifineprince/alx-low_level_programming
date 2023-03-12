#include "main.h"

/**
 * _isdigit - Write a function that checks for a digit (0 through 9).
 * @c: named variable(input)
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
