#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get a node int at index
 * @head: the first node
 * @index: the node to choose
 * Return: the choosen node
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;

	unsigned int i = 0;

	tmp = head;

	for (; i != index; tmp = tmp->next)
	{
		if (tmp == NULL)
		{
			return (NULL);
		{
		i++;
	}
	return (tmp);
}
