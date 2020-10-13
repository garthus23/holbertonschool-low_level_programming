#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - print a grid
 * @width: a width
 * @height: a height
 * Return: An int
 **/


int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = malloc(sizeof(int) * height);
	if (grid)
	{
		if (width >= 0 && height >= 0)
		{
			for (i = 0; i < height; i++)
			{
				grid[i] = malloc(width * sizeof(int));
				if (grid[i])
				{
					for (j = 0; j < width; j++)
					{
						grid[i][j] = 0;
					}
				}
				else
				{
					free(grid);
				}
			}
			return (grid);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
}
