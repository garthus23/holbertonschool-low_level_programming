#include "holberton.h"

/**
* puts2 - print every two characters
* @str: a string
* Return: nothing
*/

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	i = i - 1;

	for (j = 0; j <= i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
