#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if one or more char string in b
 * that is not 0 or 1 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			num = num << 1;
			if (*b == '1')
				num = num | 1;
			b++;
		}
		else
			return (0);
	}

	return (num);
}
