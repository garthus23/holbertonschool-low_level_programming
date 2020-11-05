#include "holberton.h"

/**
 * clear_bit - change a specific bit to 0
 * @n: a number
 * @index: the bit to change
 * Return: the new number
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);

	*n &= (~(1 << index));
	return (1);
}
