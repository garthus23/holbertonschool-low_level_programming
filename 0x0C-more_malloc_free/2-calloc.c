#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr = NULL;
	
	arr = malloc(nmemb * size);

	if (arr)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = 0;
		}
		arr[size] = '\0';
		return (arr);
	}
	else
	{
		return (NULL);
	}

}
