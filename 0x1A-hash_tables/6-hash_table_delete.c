#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: a hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *tmp;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node;
				node = node->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
		free(ht->array);
		free(ht);
	}
}
