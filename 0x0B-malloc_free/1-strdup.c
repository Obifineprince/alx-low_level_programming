#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space memory
 * @str: input parameter
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *dupstr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	dupstr = (char *)malloc((sizeof(char) * len) + 1);
	if (dupstr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dupstr[i] = str[i];
	dupstr[len] = '\0';

	return (dupstr);

}
