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
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < (n - 1); i++)
	{
		value = va_arg(args, char*);

		if (value == NULL)
		{
			value = "(nil)";
		}
		if (separator != NULL)
		{
			printf("%s%s", value, separator);
		}
		else
		{
			printf("%s", value);
		}
	}

	value = va_arg(args, char*);

	if (value == NULL)
	{
		value = "(nil)";
	}

	printf("%s\n", value);

	va_end(args);
}
