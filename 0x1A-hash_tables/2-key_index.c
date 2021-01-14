#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - create an index for a key that enter in the array
 * @key: a string
 * @size: the size of the array
 * Return: an index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int n;

	n = hash_djb2(key);

	while (n > size)
	{
		n = n / 256;
	}

	return (n);
}
