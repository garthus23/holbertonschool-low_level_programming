#include "holberton.h"
#include <stdlib.h>

/**
 * suit - next
 * @res: tmp result
 * @n: the integer
 * @pow: i've got the power
 * Return : none
 **/

void suit(unsigned long int *res, unsigned long int *n, unsigned long int *pow)
{
	if ((*res + 2) <= *n)
	{
		_putchar('1');
		*res += 2;
	}
	else if (*n > 2)
	{
		_putchar('0');
	}
	if ((*res + 1) <= *n)
	{
		_putchar('1');
		*res += 1;
	}
	else if (*n != *pow)
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
	unsigned long int *result2, *n2, *power3;

	result2 = &result, n2 = &n, power3 = &power;
	if (n > 2)
	{
		for (; (power * 2 <= n) && (power * 2 < 4294967295); power = power * 2)
		{}
		if (power == n)
		{
			result = n;
			_putchar('1');
			for (; power2 * 2 < power; power2 = power2 * 2)
			{
				_putchar('0');
			}
		}
		else
		{
			for (; power != 2;)
			{
				for (; (power2 * 2 < power); power2 = power2 * 2)
				{
				}
				if ((result + power) <= n)
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
	}
	suit(result2, n2, power3);
}
