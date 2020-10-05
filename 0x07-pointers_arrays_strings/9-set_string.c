#include "holberton.h"
#include <stdio.h>

/**
* set_string - function that sets the value of a pointer to a char
* @to: a char*
* @s: addresse to a char
* Return: 0
*/

void set_string(char **s, char *to)
{
	*s = &*to;
}
