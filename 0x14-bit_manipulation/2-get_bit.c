#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - get bit at specified index
 * @n: a number
 * @index: the index
 * Return: The bit !
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 63)
		return (-1);
	int mask =  1 << index;
	int masked_n = n & mask;
	int thebit = masked_n >> index;

	return (thebit);
}
