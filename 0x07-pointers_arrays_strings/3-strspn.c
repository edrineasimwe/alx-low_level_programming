#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the initial segment of
 * @accept: which consist only of bytes from
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int value = 0;
	int i = 0;
	int a = 0;
	int isamoung;
	while (s[i] != '\0')
	{
		isamoung = 0;
		while (accept[a] != '\0')
		{
			if (s[i] == accept[a])
			{
				isamoung = 1;
				value++;
				break;
			}
			a++;
		}

			if (isamoung == 0){
				break;
			}
		a = 0;
		i++;
	}
	return (value);
}
