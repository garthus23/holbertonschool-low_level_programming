#include "holberton.h"

/**
 * print_times_table - print times table
 * @n : integer times
 * Return: 0 when it works
 */
void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if ((j * i) >= 100)
				{
					_putchar((j * i) / 100 + '0');
					_putchar((j * i / 10) % 10 + '0');
				}
				if (((j * i) < 100) && ((j * i) > 0))
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
					if (i == 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
