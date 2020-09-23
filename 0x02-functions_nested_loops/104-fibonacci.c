#include <stdio.h>
#include "holberton.h"

/**
 * main - return the 50 first numbers from the fibonacci list
 * Return: 0 when it works
 */

int main(void)
{
	unsigned long i, j, k;

	j = 1;
	k = 1;
	printf("%lu, ", j);

	for (i = 0; i <= 96; i++)
	{
		k = k + j;
		printf("%lu", k);
		j = k - j;
		if (i < 96)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
