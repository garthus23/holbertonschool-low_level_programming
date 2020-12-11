#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - number of elements in double linked list
 * @h: a double linked list
 * Return: a size
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t i;

	tmp = h;
	i = 0;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
