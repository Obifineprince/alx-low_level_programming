#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * written by ifeanyi obi
 * @a: input paramater
 * @b: input parameter
 * Return: (0)
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
