#include "holberton.h"

/**
 * clear_bit - change a specific bit to 0
 * @n: a number
 * @index: the bit to change
 * Return: the new number
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= (~(1 << index));
	if (*n)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
