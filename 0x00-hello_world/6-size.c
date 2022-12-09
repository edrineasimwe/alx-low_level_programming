#include<stdio.h>
/**
 * main -Entry point
 * Return: Alway 0 (Success)
 */
imt main(void)
{
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}

