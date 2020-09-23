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

	for (i = 0; i <= 50; i++)
	{
		if (j <= 4000000 || k <= 4000000)
		{
			k = k + j;
			if (k % 2 == 0)
			{
				printf("%ld", k);
				printf("\n");
			}
			j = k - j;
		}
	}
	printf("%ld", k);	
	printf("\n");
	return (0);
}
