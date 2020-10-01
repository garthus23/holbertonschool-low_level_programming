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
	int i;

	{

		for (i = 0; i < n && src[i] != '\0'; i++)
			dest[i] = src[i];
		for ( ; i < n; i++)
			dest[i] = '\0';

		return (dest);
	}
}
