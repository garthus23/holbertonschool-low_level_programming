#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at index
 * @head: the first node
 * @idx: an index
 * @n: a value
 * Return: address of the new node
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *before;
	listint_t *new;


	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	tmp = *head;
	if (new == NULL)
	{
		return (NULL);
	}
	for (; i < (idx - 1); tmp = tmp->next)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		i++;
	}
	before = tmp;
	tmp = tmp->next;
	before->next = new;
	new->n = n;
	new->next = tmp;
	return (new);
}
