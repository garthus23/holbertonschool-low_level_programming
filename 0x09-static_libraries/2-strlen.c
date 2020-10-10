#include "holberton.h"

/**
 * _strlen - string len.
 * @s: a string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
