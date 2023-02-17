#include <stdio.h>
#include <unistd.h>

/**
 * main - main function print output to standard error
 *
 * Return: 1 on (success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
