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
	unsigned long int bit;

	if (index >= 63)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
