#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - change a specific bit to 1
 * @n: a number
 * @index: the bit to change
 * Return: the new number
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= 1UL << index;
	return (*n);
}
