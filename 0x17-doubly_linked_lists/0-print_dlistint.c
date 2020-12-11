#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print a double linked list
 * @h: a list
 * Return: a size
**/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t i;

	tmp = h;

	i = 0;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}

	return (i);
}
