#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character.
 * @c: named variable(input)
 * Return: returns 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);

}
