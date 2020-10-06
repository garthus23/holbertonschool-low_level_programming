#include "holberton.h"

/**
* _strlen_recursion - returns the length of a string
* @s: a string
* Return: an int
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = 1 + _strlen_recursion(s + 1);
	}
	return (n);
}
