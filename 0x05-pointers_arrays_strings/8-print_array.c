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

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
