#include "holberton.h"

/**
 * print_number - print_number with putchar
 * @n: integer
 * Return: nothing
 */

void print_number(int n)
{
	int i;
	unsigned int tmp, r;

	if (n < 0)
	{
		_putchar('-');
		r = -n;
	}
	else
	{
		r = n;
	}
	i = 1;
	tmp = r;
	while (tmp >= 10)
	{
		tmp = tmp / 10;
		i = i * 10;
	}
	while (i != 1)
	{
		_putchar((r / i) + '0');
		r = r % i;
		i = i / 10;

	}
	_putchar((r % 10) + '0');
}
