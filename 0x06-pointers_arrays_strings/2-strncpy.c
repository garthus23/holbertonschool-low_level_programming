#include "holberton.h"

/**
* *_strncpy - copies a string
* @src: a string
* @dest: a string
* @n: integer
* Return: 0
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; src[j] != '\0'; j++)
	{
	}
	for (i = 0; i < n; i++)
	{
		 dest[i] = src[i];
	}
	if (j < n)
	{
		for (; dest[i + 1] != '\0'; i++)
		{
			dest[i] = '\0';
		}
	}
	if (j > n)
	{
		dest[98] = '\0';
	}
	return (dest);
}
