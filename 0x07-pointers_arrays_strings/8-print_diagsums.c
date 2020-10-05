#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
* @a: integer
* @size: the size
* Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, len, r;

	len = size * size;

	r = 0;
	for (i = 0; i < len; i = i + (size + 1))
	{
		r = r + a[i];
	}
	printf("%d, ", r);

	r = 0;
	for (i = (len - size); i > 0; i = i - (size - 1))
	{
		r = r + a[i];
	}
	printf("%d\n", r);
}
