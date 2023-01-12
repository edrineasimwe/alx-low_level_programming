#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory.
 * whic contains a copy of the string given as a parameter.
 * @str: the source string.
 *
 * Return: return the pointer to the duplicated string.
 * it returns NULL if insufficient memmory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy == (char *)malloc((sizeof(char) * len) + 1);
	if (copy  == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}

