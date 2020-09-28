#include "holberton.h"

/**
* print_rev - reverse printing
* @s: a string
* Return: nothing
*/

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
