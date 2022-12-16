#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 *
 * Return: 1 if the letter is an upper case, 0 otherwise
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);


}
