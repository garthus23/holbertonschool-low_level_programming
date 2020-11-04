#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * suite - suite of the function
 * @head: first node
 * @index: an index
 * Return: 1 or -1
 **/

int suite(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *before;
	listint_t *deleted;
	unsigned int i = 0;

	tmp = *head;
	for (; i < (index - 1); tmp = tmp->next)
	{
		if (tmp->next == NULL)
			return (-1);
		i++;
	}
/*	printf("OK_3\n"); */
	before = tmp;
	tmp = tmp->next;
	deleted = tmp;
	tmp = tmp->next;
	before->next = tmp;
	free(deleted);
	return (1);
}

/**
 * delete_nodeint_at_index - delete node at index
 * @head: the first node
 * @index: the node to delete
 * Return: 1 if it works
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
/*	listint_t *before;*/
	listint_t *deleted;

	tmp = *head;
	if (*head == NULL)
	{
/*		printf("OK_0\n"); */
		return (-1);
	}
/*
 *	if (tmp->next == NULL && tmp != 0)
 *	{
 *		printf("OK_1\n");
 *		deleted = tmp;
 *		*head = NULL;
 *		free(deleted);
 *		return (1);
 *	}
 */
	if (index == 0)
	{
/*		printf("OK_2\n"); */
		deleted = *head;
		*head = tmp->next;
		free(deleted);
		return (1);
	}
	return (suite(head, index));
	}
