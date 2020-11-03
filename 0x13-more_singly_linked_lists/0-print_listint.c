#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all elements
 * @h: an element
 * Return: an unsigned int
 **/
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	i = 0;
	for (i = 0; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		i++;
	}
	return (i);
}
