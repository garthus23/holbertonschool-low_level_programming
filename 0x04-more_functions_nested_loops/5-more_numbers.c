#include "holberton.h"

/**
* more_numbers - print more_numbers
* Return: 0 - when it works
*/

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
	_putchar('\n');
	}
}
