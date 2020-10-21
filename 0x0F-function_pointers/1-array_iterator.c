#include <stdio.h>

/**
 * array_iterator - execute parameter on each element
 * @array: an array
 * @size: an array size
 * @action: pointer on function
 * Return: Nothing
 **/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
