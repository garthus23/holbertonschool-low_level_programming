#include "holberton.h"
#include <stdio.h>

int get_bit(unsigned long int n, unsigned int index)
{
	int mask =  1 << index;
	int masked_n = n & mask;
	int thebit = masked_n >> index;

	return (thebit);

}
