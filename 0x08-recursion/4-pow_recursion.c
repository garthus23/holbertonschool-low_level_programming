#include "holberton.h"

/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: integer
* @y: integer
* Return: 0
*/

int _pow_recursion(int x, int y)
{
	if (x == 0 || x == 1 || y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y >= 1)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	return (0);
}
