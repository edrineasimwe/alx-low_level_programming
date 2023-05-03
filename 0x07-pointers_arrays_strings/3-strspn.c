#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the initial segment of
 * @accept: which consist only of bytes from
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int size_of_s = sizeof(*s) / sizeof(*(s));
	int size_of_second = sizeof(*accept) / sizeof(*(accept));
	int value = 0;

	int isamoung = 1;

	for (int i = 0; i < size_of_s; i++)
	{
		isamoung = 0;
	for (int a = 0; a < size_of_second; a++)
	{
		if (*(s + i) == *(accept + a))
		{
			value++;
			isamoung = 1;
			break;
		}
	}

	if (isamoung == 1)
	{
		continue;
	}
	else
	{
		break;
	}

	}
	return (value);
}
