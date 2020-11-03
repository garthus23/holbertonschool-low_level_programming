#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: first node of the list
 * Return: the new first node
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *next;

	tmp = *head;
	tmp = tmp->next;
	next = tmp->next;
	tmp->next = *head;
	(*head)->next = NULL;

	for (; next->next != NULL;)
	{
		*head = tmp;
		tmp = next;
		next = next->next;
		tmp->next = *head;
	}
	*head = tmp;
	next->next = tmp;
	*head = next;
	return (*head);
}
