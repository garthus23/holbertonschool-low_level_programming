#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add an element to the end of the list
 * @head: pointer to the head
 * @str: a string
 * Return: pointer to the next element
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new;
	list_t *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	for (i = 1; str[i] != '\0'; i++)
	new->len = i + 1;
	new->next = NULL;
	tmp = *head;
	if (tmp != NULL)
	{
		for (; tmp->next != NULL;)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
