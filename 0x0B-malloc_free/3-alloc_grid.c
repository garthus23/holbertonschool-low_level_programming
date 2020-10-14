#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - print a grid
 * @width: a width
 * @height: a height
 * Return: An int
 **/


int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = NULL;

	grid = malloc(height * sizeof(int *));

	if (grid != NULL && width > 0 && height > 0)
	{
		if (width > 0 && height > 0)
		{
			for (i = 0; i < height; i++)
			{
				grid[i] = malloc(width * sizeof(int));
				if (grid[i] != NULL)
				{
					for (j = 0; j < width; j++)
					{
						grid[i][j] = 0;
					}
				}
				else
				{
					free(grid);
					return (NULL);
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
