#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: a separator
 * @n: number of argument
 * Return: none
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *value;

	va_start(args, n);
	unsigned int i;

	for (i = 0; i < (n - 1); i++)
	{
		value = va_arg(args, char*);
		printf("%s%s", value, separator);
	}
	value = va_arg(args, char*);
	printf("%s\n", value);

	va_end(args);
}
