#include "holberton.h"

/**
 * print64 - print64 bits
 * Result: return none
 **/
void print64(void)
{
	int power = 1;

	for (; power != 65; power++)
	{
		_putchar('1');
	}
}

/**
 * suit - next
 * @r: tmp result
 * @n: the integer
 * @p: i've got the power
 * Return : none
 **/
void suit(unsigned long int *r, unsigned long int *n, unsigned long int *p)
{
	if ((*r + 2) <= *n)
	{
		_putchar('1');
		*r += 2;
	}
	else if (*n > 2)
	{
		_putchar('0');
	}
	if ((*r + 1) <= *n)
	{
		_putchar('1');
		*r += 1;
	}
	else if (*n != *p)
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
	unsigned long int *result2, *power3, *n2;

	result2 = &result, n2 = &n, power3 = &power;
	if (n == ULONG_MAX)
	{
		print64();
		return;
	}
	else if (n > 2)
	{
		for (; ((power * 2) <= n);  power = power * 2)
		;
		if (power == n)
		{
			result = n;
			_putchar('1');
			for (; power2 * 2 < power; power2 = power2 * 2)
				_putchar('0');
		}
		else
		{
			for (; power != 2;)
			{
				for (; (power2 * 2 < power); power2 = power2 * 2)
				;
				if ((result + power) <= n)
				{
					_putchar('1');
					result = result + power;
				}
				else
					_putchar('0');
				power = power2;
				power2 = 1;
			}
		}
	}
	suit(result2, n2, power3);
}
