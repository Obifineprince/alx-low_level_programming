#include "main.h"
#include <stdio.h>

/**
 * main -  prints the numbers from 1 to 100
 * @void: input
 * Return: fizz for mul 3, buzz mul 5 & fizbuzz for mul of both
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("fizzbuzz");
		}
		else if (n % 3 == 0)
		{
			printf("fizz");
		}
		else if (n % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
