#include <stdio.h>
#include "holberton.h"

/**
 * main - return the 50 first numbers from the fibonacci list
 * Return: 0 when it works
 */

int main(void)
{
	long i, j, k;

	j = 1;
	k = 1;
	printf("%ld, ", j);
	for (i = 0; i <= 49; i++)
	{
		k = k + j;
		printf("%ld", k);
		j = k - j;
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
