#include "lists.h"

/**
 * sum_dlistint - sum of values of double linked list
 * @head: a double linked list
 * Return: the sum
**/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int i = 0;

	tmp = head;
	while (tmp != NULL)
	{
		i = i + tmp->n;
		tmp = tmp->next;
	}
	return (i);
}
