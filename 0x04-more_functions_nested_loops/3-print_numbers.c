#include "holberton.h"

/**
* print_numbers - print numbers
* Return: 0 - when it works
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
