#include "variadic_functions.h"

/**
 * print_char - print a char
 * @a: a char
 * Return: nothing
 **/
void print_char(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * print_int - print an int
 * @a: an int
 * Return: nothing
 **/

void print_int(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
 * print_string - print a string
 * @a: a string
 * Return: nothing
 **/

void print_string(va_list a)
{
	char *tmp = va_arg(a, char*);

	if (tmp == NULL)
	{
		tmp = "(nil)";
	}
	printf("%s", tmp);
}

/**
 * print_float - print a float
 * @a: a float
 * Return: nothing
 **/

void print_float(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * print_all - print_all
 * @format: a list
 * Return: nothing
 **/

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list values;
	char *sep = "";

	type_t print[] = {{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}};

	va_start(values, format);

	i = 0;
	while (format && format[i] != '\0')
	{
		j = 0;
		while (print[j].type != NULL)
		{
			if (format[i] == *print[j].type)
			{
				printf("%s", sep);
				print[j].f(values);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(values);
}
