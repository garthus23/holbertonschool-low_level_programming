#include "holberton.h"

/**
* function - main function
* @n: parameter
* Return: 0 when it works
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
