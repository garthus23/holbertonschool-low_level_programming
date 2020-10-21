#include <stdlib.h>

/**
 * int_index - search for integer
 * @array: an array
 * @size: a size
 * @cmp: pointer to function
 * Return: an index or an error
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
	{
		exit(0);
	}

	for (i = 0; array[i] != '\0'; i++)

	if (size > 0 && i <= size)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);

}
