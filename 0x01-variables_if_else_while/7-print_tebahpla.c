#include <stdio.h>
/**
 * main- prints the lowercase alphabet in reverse
 *
 * Return: always (0)
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);

	putchar('\n');

	return (0);
}
