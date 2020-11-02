#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - pop the head of a list
 * @head: the head node
 * Return: head->n
 **/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *del;
	int i;

	del = *head;
	tmp = *head;
	i = tmp->n;
	*head = tmp->next;
	free(del);
	return (i);
}
