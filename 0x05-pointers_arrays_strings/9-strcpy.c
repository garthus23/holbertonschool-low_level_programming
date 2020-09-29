#include "holberton.h"

/**
* *_strcpy - string copy function
* @src: string source
* @dest: string destination
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}
	return (dest);
}
