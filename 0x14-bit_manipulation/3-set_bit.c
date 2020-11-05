#include "holberton.h"

/**
 * set_bit - change a specific bit to 1
 * @n: a number
 * @index: the bit to change
 * Return: the new number
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);

	*n |= (1 << index);
	return (1);
}
