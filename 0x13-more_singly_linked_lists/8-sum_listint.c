#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum the int in the list
 * @head: the first node
 * Return: the sum
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
	{
		sum = sum + head->n;
	}
	return (sum);
}
