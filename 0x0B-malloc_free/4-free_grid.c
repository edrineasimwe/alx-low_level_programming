#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - free 2d array
 * @grid: 2d grid
 * @height: height dimesion of grid
 * Return: void
 */

void free_grid(int **grid, const int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		 grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}
