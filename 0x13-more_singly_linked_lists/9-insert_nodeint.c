#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *before;
	listint_t *new;


	unsigned int i = 0;

	tmp = *head;
	for (; i < (idx - 1); tmp = tmp->next)
		i++;
	before = tmp;
	tmp = tmp->next;
	before->next = tmp;
	new = tmp;
	new->n = n;
	new->next = tmp->next;
	return (tmp);
}
