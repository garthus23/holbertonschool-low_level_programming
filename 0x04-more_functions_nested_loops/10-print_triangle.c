#include "holberton.h"

/**
 * print_triangle - print_triangle
 * @size: size of the triangle
 * Return: 0 - when it works
 */

void print_triangle(int size)
{
	int line, space, hash;

	hash = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < size; line++)
		{
			for (space = 1; space <= size; space++)
			{
				if (space < hash)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			hash--;
			_putchar('\n');
		}
	}
}
