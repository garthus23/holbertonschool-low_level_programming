#include "holberton.h"

/**
* puts_half - print half
* @str: a string
* Return: nothing
*/

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	if (i % 2 != 0)
	{
		j = (i - 1) / 2;
	}
	else
	{
		j = i / 2;
	}

	for (; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
