#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node in the end
 * @head: a double linked list
 * @n: a number to add
 * Return: a double linked list
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *current;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	if (*head == NULL)
	{
		*head = tmp;
		tmp->prev = NULL;
		tmp->next = NULL;
		return (tmp);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = tmp;
	tmp->prev = current;
	tmp->next = NULL;
	return (tmp);
}
