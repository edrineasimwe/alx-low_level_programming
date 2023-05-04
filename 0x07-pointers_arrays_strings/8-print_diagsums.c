#include "main.h"
#include <stdlib.h>

/**
 * print_diagsums - a function to print out the values
 * sum in a diagonal in regards to:
 * @a: The diagonal array
 * @size: The number of columns in the array
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int position = 0;
	int bound = size * size;
	int going = size + 1;

	while (position <= bound)
	{
		sum1 += *(a + position);
		position += going;
	}

	position = bound - size;
	going = size - 1;

	while (position >= size - 1)
	{
		sum2 += *(a + position);
		position -= going;
	}

	printf("%d, %d\n", sum1, sum2);
}

