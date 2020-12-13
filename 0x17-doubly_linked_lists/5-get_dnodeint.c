#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get a node
 * @head: a double linked list
 * @index: an index
 * Return: pointer sur node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;
	int end = 0;

	if (head == NULL)
		return (NULL);

	current = head;
	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);
		if (current->next != NULL)
		{
			current = current->next;
		}
		else
		{
			end = 1;
		}
		if (current->next == NULL && end == 1)
			return (NULL);
	}
	return (NULL);
}
