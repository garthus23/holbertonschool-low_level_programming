#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t _print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t i;

	i = 1;
	current = h;
	while (current->next != NULL)
	{
		current = current->next;
	}

	while (current->prev != NULL)
	{
		current = current->prev;
		i++;
	}
	return (i);
}
