#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print a list
 * @st: pointer on struct
 * Return: number of elements
 **/

int print_list(list_t *st)
{
	int i = 0;

	for (; st != NULL; st = st->next)
	{
		if (st->str != NULL)
		{
			printf("[%d] %s\n", st->len, st->str);
			i++;
		}
		else
		{
			printf("[%d] (nil)\n", st->len);
			i++;
		}
	}
	printf("\n");
	return (i);
}
