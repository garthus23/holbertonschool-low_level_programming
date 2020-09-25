#include <stdio.h>
#include "holberton.h"

/**
 * print_number - print the number
 * @n: integer
 * Return: 0 - when it works
 */

void print_number(int n)
{
	unsigned int j, len, tmp, i;

	j = 0;
	len = 0;
	if (!n)
	{
		_putchar('0');
		return;
	}
	tmp = n;
	i = n;
	if (n < 0)
	{
		_putchar('-');
		tmp = -n;
		i = -n;
	}
	while (tmp)
	{
		tmp = tmp / 10;
		len++;
	}
	tmp = 1;
	for (j = 1; j < len; j++)
	{
		tmp = tmp * 10;
	}
	for (j = 0; j < len; j++)
	{
		_putchar((i / tmp % 10) + '0');
		tmp = tmp / 10;
	}
}
