#include <stdio.h>
#include "holberton.h"

/**
 * main - return the 50 first numbers from the fibonacci list
 * Return: 0 when it works
 */

int main(void)
{
	double i, j, n, k;

	j = 1;
	k = 1;
	printf("%.0lf ", j);
	for (i = 0; i <= 50; i++)
	{
		k = k + j;
		printf("%.0lf ", k);
		j = k - j;
	}
	printf("\n");
	return (0);
}
