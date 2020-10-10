#include "holberton.h"

/**
* _puts - print a string
* @str: a string
* Return: nothing
*/

void _puts(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
