#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *oneisnull - if one or more of the argument is null
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 **/

char *oneisnull(char *s1, char *s2)
{
	int i, l;
	char *arr = NULL;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	else if (s1 == NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
		}
		arr = malloc(sizeof(char) * (i + 1));
		for (l = 0; l < i; l++)
		{
			arr[l] = s2[l];
		}
		arr[i] = '\0';
		return (arr);
	}
	else if (s2 == NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
		}
		arr = malloc(sizeof(char) * (i + 1));
		for (l = 0; l < i; l++)
		{
			arr[l] = s1[l];
		}
		arr[i] = '\0';
		return (arr);
	}
	else
	{
		return (NULL);
	}

}



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


	if (s1 == NULL || s2 == NULL)
	{
		return (oneisnull(s1, s2));
	}
	else
	{
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
}
