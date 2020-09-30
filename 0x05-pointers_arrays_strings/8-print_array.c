#include "holberton.h"
#include <stdio.h>

/**
* print_array - print arrays
* @a: an array
* @n: an integer
* Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[n - 1]);
	}
	if (n == 0)
	{
		printf("%d", a[n]);
	}
}
