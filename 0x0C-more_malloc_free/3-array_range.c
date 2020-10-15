#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - create an array range
 * @min: a minimum
 * @max: a maximum
 * Return: 0 when succeed
**/


int *array_range(int min, int max)
{
	int i, j;
	int *arr = NULL;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr)
	{
		for (i = min; i < max; i++)
		{
			arr[j] = i;
			j++;
		}
		arr[j] = '\n';
	}
	return (arr);
}
