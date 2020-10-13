#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - copy of the string given as a parameter
 * @str: a string
 * Return: a pointer
 */


char *_strdup(char *str)
{
	int i, j;
	char *arr;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	arr = malloc(sizeof(char) * (i + 1));

	if (str != NULL && arr != NULL)
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