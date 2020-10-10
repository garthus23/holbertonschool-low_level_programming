#include "holberton.h"

/**
* _isdigit - check for digit
* @c: integer
* Return: 0 - when it works
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
