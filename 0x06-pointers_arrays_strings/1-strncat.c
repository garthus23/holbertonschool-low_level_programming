#include "holberton.h"

/**
* *_strncat - concatenates two strings
* @src: source string
* @dest: destination string
* @n: an integer
* Return: destination string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	k = 0;
	for (j = 0; j < n; j++)
	{
		if (k < n && k < 97)
		{
			dest[i] = src[j];
		}
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
