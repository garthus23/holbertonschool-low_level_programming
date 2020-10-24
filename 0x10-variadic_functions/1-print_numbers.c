#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - print list of numbers
 * @separator: the separator
 * @n: number of arguments
 * Return: none
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int value;

	va_start(args, n);

	for (i = 0; i < (n - 1); i++)
	{
		value = va_arg(args, int);
		printf("%d%s", value, separator);
	}
	value = va_arg(args, int);
	printf("%d\n", value);

	va_end(args);
}
