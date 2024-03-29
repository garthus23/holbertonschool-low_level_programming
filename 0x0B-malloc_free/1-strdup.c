#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - copy of the string given as a parameter
 * @str: a string
 * Return: a pointer
 */


char *_strdup(char *str)
{
	int i, j;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}

	arr = malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		for (j = 0; j != i; j++)
		{
			arr[j] = str[j];
		}
		arr[j] = '\0';
		return (arr);
	}
	else
	{
		free(arr);
		return (NULL);
	}
}
