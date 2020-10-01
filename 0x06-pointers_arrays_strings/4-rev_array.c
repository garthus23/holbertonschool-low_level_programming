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
	
	if (n > 0)
	{
		i = n - 1;
		for (j = 0; j != i; j++)
		{
			tmp = a[j];
			a[j] = a[i];
			a[i] = tmp;
			i--;
		}
	}
}
