#include "holberton.h"
#include <stdlib.h>

/**
 * *str_concat - concatenate strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 **/

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *arr;


	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	k = i + j;

	arr = malloc(sizeof(char) * (i + j));

	for (k = 0; k < i; k++)
	{
		arr[k] = s1[k];
	}
	for (k = 0; k < i + j; k++)
	{
		arr[k + i] = s2[k];
	}
	return (arr);
}
