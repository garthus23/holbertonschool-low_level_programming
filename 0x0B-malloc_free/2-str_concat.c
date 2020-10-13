#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - concatenate strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 **/

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *arr = NULL;


	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	k = i + j;

	arr = malloc(sizeof(char) * (k + 1));

	if (arr != NULL)
	{
		for (l = 0; l < i; l++)
		{
			arr[l] = s1[l];
		}
		for (l = 0; l < j; l++)
		{
			arr[i + l] = s2[l];
		}
		arr[k] = '\0';
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
