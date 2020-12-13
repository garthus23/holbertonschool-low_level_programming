#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_t *insert_dnodeint_at_index- insert node at index
 * @h: double linked list
 * @idx: index
 * @n: value to add
 * Return: return the head of the double list
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	dlistint_t *after;
	unsigned int i;


	current = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 1; current->next != NULL; current = current->next)
	{
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			new->n = n;
			after = current->next;
			new->next = after;
			current->next = new;
			after->prev = new;
			new->prev = current;
			return (new);
		}
		i++;
	}
	if (i == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
