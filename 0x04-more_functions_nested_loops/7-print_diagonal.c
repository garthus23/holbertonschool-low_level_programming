#include "holberton.h"

/**
 * print_diagonal - print a diagonal from an integer
 * @n: integer
 * Return: 0 - when it works
 */

void print_diagonal(int n)
{
	int line, space, ok;

	ok = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space <= ok; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			ok++;
		}
	}
}
