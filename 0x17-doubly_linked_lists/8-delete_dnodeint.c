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

	current = *head;
	if (index == 0 && current->next != NULL)
	{
		current = current->next;
		free(current->prev);
		current->prev = NULL;
		*head = current;
		return (1);
	}
	if (index == 0 && current->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	return (-1);
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

	if (*head)
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
				free(current);
				return (1);
			}
			i++;
		}
		if (i == index)
		{
			current = current->prev;
			free(current->next);
			current->next = NULL;
			return (1);
		}
	}
	return (-1);
}
