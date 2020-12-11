#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a double linked list
 * @head: a double linked list
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head->next;
	while (tmp != NULL)
	{
		free(head);
		head = tmp;
		tmp = tmp->next;
	}
	free(head);
}
