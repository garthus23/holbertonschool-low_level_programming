#include "holberton.h"

/**
 * jack_bauer - Function to print minutes of 24 Hours
 * Return: 0 when it works
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23 ; i++)
	{
		for (j = 0; j <= 59 ; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}

}
