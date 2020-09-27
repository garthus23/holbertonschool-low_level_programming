#include "holberton.h"

/**
* _puts - print a string
* @str: a string
* Return: nothing
*/

void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
