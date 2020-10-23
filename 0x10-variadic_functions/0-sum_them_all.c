#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 * Return: the result
 **/

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		result = result + value;
	}
	va_end(args);

	return (result);
}
