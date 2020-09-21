#include "holberton.h"

/**
 * print_times_table - print times table
 * @n : integer times
 * Return: 0 when it works
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 15 && n >= 0)
	{
		for (i = 0; (i <= n); i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (j = 1; j <= n; j++)
			{
				if (j * i < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((j * i) + '0');
				}
				if ((j * i) >= 10 && (j * i) < 100)
				{
					_putchar(' ');
					_putchar((j * i / 10) + '0');
					_putchar((j * i % 10) + '0');
				}
				if ((j * i) >= 100)
				{
					_putchar((j * i / 100) + '0');
					_putchar(((j * i / 10) % 10) + '0');
					_putchar((j * i % 10) + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
