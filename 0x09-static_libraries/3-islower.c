#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character.
 * @c: parameter to be printed
 * is written by ifeanyi obi
 * Return: 1 if it is a lower case
 * and 0 if it is other wise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
