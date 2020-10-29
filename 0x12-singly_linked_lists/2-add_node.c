#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add an element to a list
 * @head: pointer to the head
 * @str: a string
 * Return: pointer to the next element
 **/

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
	printf("Error\n");
	return (NULL);
	}

	new->str = strdup(str);
	for (i = 1; str[i] != '\0'; i++)
	new->len = i + 1;
	new->next = *head;
	*head = new;
	return (*head);
}
