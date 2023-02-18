#include <stdio.h>

/**
 * main- print lowwercase with new line
 *
 * Return: always (0)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e' && lc  != 'q')
			putchar(lc);
	}
	putchar('\n');

	return (0);
}
