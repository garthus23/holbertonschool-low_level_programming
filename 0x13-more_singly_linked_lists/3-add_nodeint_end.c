#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end of a list
 * @head: a head
 * @n: a number to add to the node
 * Return: a node
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		for (tmp = *head; tmp->next != NULL; tmp = tmp->next)
		tmp->next = new;
	}
	return (new);
}
