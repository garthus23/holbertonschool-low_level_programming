#include <math.h>
#include <stdio.h>
#include "holberton.h"

/**
* print_number - print the number
* @n: integer
* Return: 0 - when it works
*/

void print_number(int n)
{
	int i;
	i = n;

	for (divide = 0; i != 0; divide++)
	{
		i =% 10;
	}
	printf("%d", i);
	
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > -10 && n < 10)
	{
		_putchar(n + '0');
	}
	if (n > 10 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n > 100 && n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n > 1000 && n < 10000)
	{
		_putchar(n / 1000 + '0');
		_putchar(n / 100 % 10 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}

}
