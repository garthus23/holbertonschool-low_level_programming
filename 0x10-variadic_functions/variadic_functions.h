#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
typedef struct format 
{
	char *type;
	void (*f)(va_list a);
} type_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
