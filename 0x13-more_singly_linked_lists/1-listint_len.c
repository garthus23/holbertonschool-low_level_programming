#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - print the len of the list
 * @h: an element
 * Return: the number of elements
 **/

size_t listint_len(const listint_t *h)
{
	unsigned int i;

	i = 0;
	for (; h->next != NULL; h = h->next)
	{
		i++;
	}
	i++;

	return (i);
}
