#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_gird - prints a grid of integers
 * @grid: the address of the two dimensional grid
 *
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void free_gird(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
