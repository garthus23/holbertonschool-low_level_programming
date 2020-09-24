#include "holberton.h"

/**
* print_line - print n _
* @n: integer
* Return: 0 - when it works
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
