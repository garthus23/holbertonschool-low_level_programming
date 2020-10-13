#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: a grid
 * @height: some lines
 * Return: nothing
**/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		printf("%d \n", *grid[i]);
		free(grid[i]);
	}
	free(grid);
	grid = NULL;
}
