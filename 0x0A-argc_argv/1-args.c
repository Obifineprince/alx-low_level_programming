#include <stdio.h>


/**
 * main - prints the number of arguments passed into the program
 * @argc: the number of arguments
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 (success)
 */


int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);
	return (0);
}
