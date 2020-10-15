#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: a pointer
 * @old_size: current size of ptr
 * @new_size: new size
 * Return: a pointer
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;

	if (new_size < old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		return (ptr);
	}

	arr = ptr;
	arr = malloc(old_size + new_size - old_size);
	free(ptr);

	return (arr);
}
