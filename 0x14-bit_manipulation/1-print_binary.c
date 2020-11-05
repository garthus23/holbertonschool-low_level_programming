#include "holberton.h"

/**
 * suite - next
 * @result: tmp result
 * @n: the integer
 * Return : none
 **/

void suite(unsigned long int *result, unsigned long int *n)
{
	if ((*result + 2) <= *n)
	{
		_putchar('1');
		*result += 2;
	}
	else if (*n > 2)
	{
		_putchar('0');
	}
	if ((*result + 1) <= *n)
	{
		_putchar('1');
		*result += 1;
	}
	else
	{
		_putchar('0');
	}
}

/**
 * print_binary - convert decimal to binary
 * @n: an int
 * Return: a binary
 **/
void print_binary(unsigned long int n)
{
	unsigned long int power = 1, power2 = 1, result = 0;
	unsigned long int *result2, *n2;

	result2 = &result;
	n2 = &n;

	if (n > 2)
	{
		for (; power * 2 <= n ; power = power * 2)
		{
		}
		for (; power != 2;)
		{
			for (; power2 * 2 < power; power2 = power2 * 2)
			{
			}
			if ((result + power) < n)
			{
				_putchar('1');
				result = result + power;
			}
			else
			{
				_putchar('0');
			}
			power = power2;
			power2 = 1;
		}
	}
	suite(result2, n2);
}
