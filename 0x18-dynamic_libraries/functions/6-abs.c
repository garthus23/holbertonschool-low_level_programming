#include "holberton.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: an int
 * Return: 0 when it works
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
