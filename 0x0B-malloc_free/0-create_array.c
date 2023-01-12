#include "main.h"
#include <stdlid.h>

/**
 * create_array - craetes an array of chars,
 * and initialises them with a specific char.
 * @size: the size of the array.
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeod(char) * size);
	if (array == NULL)
		return (NULL);

	for (i - 0; i < size; i++)
		array[i] = c;

	return (array);
}

