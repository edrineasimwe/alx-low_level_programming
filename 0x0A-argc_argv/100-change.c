#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints the minimum number of coins
 * @argc: number of arguments.
 * @argv: argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int count, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if 
