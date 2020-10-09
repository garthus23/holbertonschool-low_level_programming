#include "holberton.h"

/**
* *_strcpy - copy a string
* @src: string source
* @dest: string destination
* Return: 0 when it works
*/

char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0;; len++)
	{
		if (src[len] == '\0')
		{
			dest[len] = src[len];
			break;
		}
		dest[len] = src[len];
	}
	return (dest);
}
