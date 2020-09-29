#include "holberton.h"

/**
* swap_int - swap two integers
* @a: an integer
* @b: an integer
* Return: none it's a void function
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
