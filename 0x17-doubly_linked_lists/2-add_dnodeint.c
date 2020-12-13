#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of a double linkedlist
 * @head: a double linked list
 * @n: a number to add
 * Return: a double linked list
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = malloc(sizeof(dlistint_t));
	tmp->next = *head;
	tmp->prev = NULL;
	tmp->n = n;
	(*head)->prev = tmp;
	*head = tmp;
	return (*head);
}
