#include "holberton.h"

/**
 * flip_bits - how many bits to flip
 * @n: the number to change
 * @m: the number to get
 * Return: the number of flipped bits
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nb = n ^ m;
	int count = 0;

	while (nb > 0)
	{
		count++;
		nb &= (nb - 1);
	}
	return (count);
}
