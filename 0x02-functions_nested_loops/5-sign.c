#include "holberton.h"

/**
 * print_sign - print the sign of an int
 * @n: an integer
 * Return: 0 when it works
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		 _putchar('0');
		return (0);
	}
}
