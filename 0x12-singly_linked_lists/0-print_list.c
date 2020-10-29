#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print a list
 * @h: pointer on struct
 * Return: number of elements
 **/

size_t print_list(const list_t *h)
{
	int i = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			i++;
		}
		else
		{
			printf("[0] (nil)\n");
			i++;
		}
	}
	return (i);
}
