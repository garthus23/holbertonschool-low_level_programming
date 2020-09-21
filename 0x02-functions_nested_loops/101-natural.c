#include <stdio.h>
#include "holberton.h"

/**
 * main - print all the multiples of 3 or 5 below 1024
 * Return: 0 when it works
 */

void main(void)
{
	int i = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
