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

	arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[size] = '\0';
	return (arr);
}
