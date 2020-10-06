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
	int i, j;
	int sum;
	int r;

	r = size * size;

	i = 0;
	sum = 0;
	while (i < r)
	{
		sum = sum + a[i];
		i = i + size + 1;
	}
	printf("%d, ", sum);
	j = 0;
	sum = 0;
	while (j < (r - 1))
	{
		sum = sum + a[i];
		j = j + (size - 1);
	}

	printf("%d\n", sum);
}
