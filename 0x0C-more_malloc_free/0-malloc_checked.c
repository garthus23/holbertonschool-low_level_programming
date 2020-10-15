#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * malloc_checked - allocates memory using malloc
 * @b: malloc size
 * Return: 98
 **/

void *malloc_checked(unsigned int b)
{
	double *checked;

	checked = malloc(b);

	if (checked != NULL)
	{
		return (checked);
	}
		exit(98);
}
