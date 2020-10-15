#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: numbers of elements
 * @size: size of the byte of element
 * Return: arr a pointer
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr)
	{
		for (i = 0; i < nmemb; i++)
		{
			arr[i] = 0;
		}
		arr[size] = '\0';
	}
	return (arr);
}
