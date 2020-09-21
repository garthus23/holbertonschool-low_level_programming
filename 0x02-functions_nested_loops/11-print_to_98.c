#include <stdio.h>
#include "holberton.h"


/**
 * print_to_98 - Print to 98
 * @n: integer parameter
 * Return: 0 when it works
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	if (n >= 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
}
