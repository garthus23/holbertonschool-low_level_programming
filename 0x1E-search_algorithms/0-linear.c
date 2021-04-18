#include "search_algos.h"


/**
 * linear_search - it's a linear search
 * @array: an array
 * @size: size of the array
 * @value: the value to search
 * return: the index of the value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	while (i != size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
		i++;
	}
	return (-1);
}
