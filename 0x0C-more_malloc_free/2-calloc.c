#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: numbers of elements
 * @size: size of the byte of element
 * Return: arr a pointer
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned j;
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr)
	{
		for (j = 0; j < (nmemb * size); j++)
		((char *)arr)[j] = 0;
	}
	else
	{
		return(NULL);
	}
	return (arr);
}
