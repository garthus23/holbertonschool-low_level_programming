#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


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
