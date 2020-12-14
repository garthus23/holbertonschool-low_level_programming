#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * deletefirstnode - delete node at index 0
 * @head: a double linked list
 * @index: an index to delete
 * Return: 1 on succeed, -1 if it fail
 **/
int deletefirstnode(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	if (head)
	{
		current = *head;
		if (index == 0 && current->next)
		{
			current->next->prev = NULL;
			*head = current->next;
			return (1);
		}
		if (index == 0 && !current->next)
		{
			current = malloc(sizeof(dlistint_t));
			*head = current;
			return (-1);
		}
	}
	return (0);
}


/**
 * delete_dnodeint_at_index - delete at index - vim
 * @head: a double linked list
 * @index: an index to delete
 * Return: 1 on succeed or -1 if it failed
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head)
	{
		if (index == 0)
			return (deletefirstnode(head, index));
		current = *head;
		for (i = 0; current->next != NULL; current = current->next)
		{
			if (i == index && current->next != NULL)
			{
				current->next->prev = current->prev;
				current->prev->next = current->next;
				return (1);
			}
			i++;
		}
		if (i == index && !current->next)
		{
			current = current->prev;
			current->next = NULL;
			return (1);
		}
	}
	return (-1);
}
