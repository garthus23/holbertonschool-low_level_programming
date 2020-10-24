#include "variadic_functions.h"
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

	value = va_arg(args, int);

	if (n > 0 || n != NULL)
	{
		for (i = 0; i < (n - 1); i++)
		{
			if (separator != NULL)
			{
				printf("%d%s", value, separator);
			}
			else
			{
				printf("%d", value);
			}
		}
		value = va_arg(args, int);
		printf("%d\n", value);

		va_end(args);
	}
}
