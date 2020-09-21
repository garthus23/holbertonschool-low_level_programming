#include "holberton.h"

/**
 * times_table - print times table
 * Return: 0 when it works
 */

void times_table(void)
{
	int i, j, unite, dizaine;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j <= 9; j++)
		{
			if ((j * i) < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((j * i) + '0');
			}
			else
			{
				dizaine = (j * i) / 10;
				unite = (j * i) % 10;
				_putchar(' ');
				_putchar(dizaine + '0');
				_putchar(unite + '0');
			}
			if (j < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
