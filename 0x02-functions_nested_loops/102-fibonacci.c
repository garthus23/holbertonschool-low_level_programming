#include <stdio.h>
#include "holberton.h"

/**
 * function - 
 * Return: 0 when it works
 */

int main(void)
{
	double i, j, n, k;

	j = 1;
	k = 0;
	printf("%.0lf ", k);

	for (i = 0; i <= 50; i++)
	{
		k = k + j;
		printf("%.0lf ", k);
		j = k-j;	
	}
	printf("\n");
}
