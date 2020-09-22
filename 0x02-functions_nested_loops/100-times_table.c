#include "holberton.h"

/**
 * print_times_table - print times table
 * @n : integer times
 * Return: 0 when it works
 */
void print_times_table(int n)
{
	int i, j;

		for (i = 0; (i <= n && n <= 15 && n > 0); i++)
		{
			for (j = 0; j <= n; j++)
			{
				if ((j * i) >= 100)
				{
					_putchar((j * i) / 100 + '0');
					_putchar((j * i / 10) % 10 + '0');
				}
				if ((j * i) < 100)
				{
					_putchar(' ');
					if ((j * i) >= 10)
					{
						_putchar((j * i) / 10 + '0');
					}
					else
					{
						_putchar(' ');
					}
				}
					_putchar((j * i) % 10 + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}
