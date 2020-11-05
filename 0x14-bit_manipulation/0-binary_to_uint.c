#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - convert char* to decimal
 * @b: a string of bits
 * Return: The result in decimal
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, k;
	unsigned int power = 1;
	unsigned int result;

	for (i = 0; b[i] != '\0'; i++)
	{}
	k = i;
	result = 0;

	i = i - 1;
	for (; j != k; j++)
	{
		if (b[i] < 48 || b[i] > 57)
			return (0);
		result = result + ((b[i] - 48) * power);
		power = 2 * power;
		i--;
	}
	return (result);
}
