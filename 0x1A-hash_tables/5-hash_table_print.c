#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: a hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		if (node == NULL)
			continue;

		while (node != NULL)
		{
			printf("'%s : %s',", node->key, node->value);
			node = node->next;
		}
	}
		printf("}");
		printf("\n");
}
