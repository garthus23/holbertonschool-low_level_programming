#include "holberton.h"

/**
 * print_last_digit - Function that print last digit of an integer
 * @n: an integer
 * Return: 0 when it works
 */

int print_last_digit(int n)
{
	int lastd = n % 10;

	if (n < 0)
	{
		lastd = -lastd;
	}
	_putchar(lastd + '0');
	return (lastd);
}
