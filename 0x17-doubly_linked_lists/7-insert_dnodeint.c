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
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	new->n = n;

	if (*h == NULL && idx == 0)
	{
		*h = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	current = *h;
	if (idx == 0)
	{
		current->next->prev = new;
		new->next = current->next;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	for (i = 1; current->next != NULL; current = current->next)
	{
		if (i == idx)
		{
			new->next = current->next;
			current->next->prev = new;
			current->next = new;
			new->prev = current;
			return (*h);
		}
		i++;
	}
	return (*h);
}