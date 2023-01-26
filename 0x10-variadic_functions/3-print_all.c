#include "variadic_functions.h"
/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, k = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), k = 1;
				break;
			case 'f':
				printf("%f", var_arg(valist, double)), k = 1;
				break;
			case 's':
				str = va_arg(valist, char *), k = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				print("%s", str);
				break;
		} i++;
	}
	prinf("\n"), va_end(valist);
}
