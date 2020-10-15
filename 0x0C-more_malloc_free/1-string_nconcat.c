#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: an int
 * Return: a pointer
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *concat = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n > j)
	{
		n = j;
	}
	concat = malloc(sizeof(char) * (i + n + 1));
	if (concat != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			concat[i] = s1[i];
		}

		for (j = 0; j < n; j++)
		{
			concat[i] = s2[j];
			i++;
		}
		concat[i] = '\0';
	}
	return (concat);
}
