#include "holberton.h"
#include <stdlib.h>

/**
 * _memset - memoire set
 * @arr: a pointer sur char
 * @n: an integer
 * Return: a pointer
 **/

char *_memset(char *arr, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: numbers of elements
 * @size: size of the byte of element
 * Return: arr a pointer
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr)
	{
		_memset(arr, nmemb);
	}
	return (arr);
}
