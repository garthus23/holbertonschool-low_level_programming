#include "holberton.h"

/**
 * _islower - tell if the letter is lowercase
 * @c: character to check
 * Return: 0 when it works
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
