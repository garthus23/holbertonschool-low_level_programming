#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: pointer to the square matrix of integers
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;
	int xy;

	xy = size * size;

	i = 0;
	sum1 = 0;
	while (i < xy)
	{
		sum1 += a[i];
		i = i + size + 1;
	}
	printf("%d, ", sum1);
	i = 0;
	sum2 = 0;
	while (i < (xy - 1))
	{
		sum2 += a[i];
		i = i + (size - 1);
	}

	printf("%d\n", sum2);
}
