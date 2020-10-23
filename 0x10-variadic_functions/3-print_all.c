#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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
	printf("%s", va_arg(a, char*));
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
	unsigned int i = 0;
	unsigned int j;
	va_list values;

	va_start(values, format);

	type_t print[] = {{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}};



	while (format[i] != '\0')
	{
		j = 0;
		while (print[j].type != NULL)
		{
			if (format[i] == *print[j].type)
			{
				print[j].f(values);
			}
			j++;
		}

		if (format[i + 1] != '\0' && (format[i] == 'c' ||
					format[i] == 'i' ||
					format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(values);
}
