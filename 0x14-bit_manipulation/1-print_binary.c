#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

void print_binary(unsigned long int n)
{
	unsigned long int power = 1, power2 = 1, result = 0;

	if (n > 2)
	{
		for (;power * 2 <= n ; power = power * 2)
		{
		}
		for (; power != 2;)
		{
			for (;power2 *2 < power; power2 = power2*2)
			{
			}
			if ( (result + power) < n)
			{
				_putchar('1');
				result = result + power;
			}
			else
			{
				_putchar('0');
			}
			//		printf("Result = %ld | Power = %ld\n", result, power);
			power = power2;
			power2 = 1;
		}
	}
	if ((result + 2) <= n)
	{
		putchar ('1');
		result += 2;
	}
	else if (n > 2)
	{
		putchar ('0');
	}
	if ((result + 1) <= n)
	{
		putchar ('1');
		result += 1;
	}
	else
	{
		putchar ('0');
	}
}
