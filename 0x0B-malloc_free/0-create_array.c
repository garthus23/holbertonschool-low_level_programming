#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - funtion that initialise an array
 * @size: size of the array
 * @c: character
 * Return: pointer
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		arr[size] = '\0';
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
