#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct format - func cases
 * @type: type
 * @f: pointer sur function
 **/
typedef struct format
{
	char *type;
	void (*f)(va_list a);
} type_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
