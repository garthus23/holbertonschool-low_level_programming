#include <stdio.h>
#include "holberton.h"


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;
	return (*n & ~mask) | ((1 << index) & mask);
}
