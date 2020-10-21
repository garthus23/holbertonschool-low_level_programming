#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that print a name
 * @name: a name
 * @f: a pointer to a function
 **/

void print_name(char *name, void (*f)(char *))
{
	if (!f)
	{
		exit(0);
	}
	f(name);
}
