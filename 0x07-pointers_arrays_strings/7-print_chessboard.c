#include "main.h"
#include <unistd.h>

/**
 * print_chessboard - a function to print
 * out the layout of the popular board game
 * @a: consists of the flat view of a chess board
 * Return: Doesn't return anything
 */

void print_chessboard(char (*a)[8])
{

	int i = 0;
	char *letter;

	while (i < 8)
	{
		letter = a[i];
		write(1, letter, 8);
		i++;
		write(1, "\n", 1);
	}
}

