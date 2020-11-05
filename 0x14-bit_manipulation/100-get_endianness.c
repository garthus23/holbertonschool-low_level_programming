#include "holberton.h"

/**
 * get_endianness - function that checks the endianness
 * Return: an int
 **/
int get_endianness(void)
{
	int n = 1;

	if (*(char *)&n == 1)
	{
		return (n);
	}
	return (n);
}
