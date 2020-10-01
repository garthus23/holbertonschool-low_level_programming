#include "holberton.h"

/**
* *_strcat - concatenate two strings
* @src: string source
* @dest: string destination
* Return: destination string
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	dest[i] = ' ';
	for (j = 0; src[j] != '\0'; j++)
	{
		i++;
		dest[i] = src[j];
	}
	dest[i + 1] = '\0';
	return (dest);
}
