#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free a list of int2
 * @head: pointer on element
 * Return: Nothing
 **/

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *headtmp;

	tmp = *head;
	while (tmp != NULL)
	{
		headtmp = tmp;
		tmp = tmp->next;
		free(headtmp);
	}
	*head = NULL;
}
