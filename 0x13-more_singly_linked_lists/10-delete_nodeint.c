#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: the first node
 * @index: the node to delete
 * Return: 1 if it works
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *before;
	listint_t *deleted;
	unsigned int i = 0;

	tmp = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (tmp->next == NULL)
	{
		deleted = tmp;
		*head = NULL;
		free(deleted);
		return (1);
	}
	if (index == 0)
	{
		deleted = *head;
		*head = tmp->next;
		free(deleted);
		return (1);
	}
	for (; i < (index - 1); tmp = tmp->next)
	{
		if (tmp == NULL || tmp->next == NULL)
		{
			return (-1);
		}
		i++;
	}
	before = tmp;
	tmp = tmp->next;
	deleted = tmp;
	tmp = tmp->next;
	before->next = tmp;
	free(deleted);
	return (1);
}
