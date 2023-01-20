#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum of the parameters
 * @n: number of parameters
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum == o;
	va_list args;

	if (n == 0)
		return (sum);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_args(args, int);
	va_end(args);
	return (sum);
}
