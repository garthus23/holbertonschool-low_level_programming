#include "holberton.h"

/**
 * print_square - print a square
 * @size: size of the square
 * Return: 0 - when it works
 */

void print_square(int size)
{
	int line, hash;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (hash = 0; hash < size; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
