#include "holberton.h"

/**
 * _isalpha - check if c is a letter
 * @c: characteri to check
 * Return: 0 when it works
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
