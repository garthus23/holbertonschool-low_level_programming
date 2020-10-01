#include "holberton.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: integer
* @n: integer
* Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = n - 1;
	for (j = 0; j != i; j++)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		i--;
	}
}
