#include "variadic_functions.h"
/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	if (format == NULL)
	{
		fprintf(stderr, "Error: Invalid format string\n");
		return;
	}
	int i;
	int flag;
	char *str;
	va_list a_list;

	va_start(a_list, format);
	i = 0;
	while (format[i] != '\0')
	{
		is_valid_specifier = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				is_valid_specifier = 1;
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				is_valid_specifier = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				is_valid_specifier = 1;
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				is_valid_specifier = 1;
				break;
		default:
			fprintf(stderr, "Error: Invalid format specifier: %c\n", format[i]);
			break;
		}
		if (format[i + 1] != '\0' && is_valid_specifier)
			printf(", ");
		i++;
	}
	printf('\n');
	va_end(args);
}
