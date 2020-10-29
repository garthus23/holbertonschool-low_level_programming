#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - len of the list
 * @h: an element
 * Return: number of elements
 **/

size_t list_len(const list_t *h)
{
	int i = 0;

	for (; h != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}
