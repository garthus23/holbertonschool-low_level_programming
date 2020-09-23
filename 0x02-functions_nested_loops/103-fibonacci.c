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

	for (i = 0; i <= 30; i++)
	{
		k = k + j;
		if (k % 2 == 0)
		{
			printf("%ld", k);
			if (i < 30)
			{
				printf(", ");
			}
		}
		j = k - j;
	}
	printf("\n");
	return (0);
}
