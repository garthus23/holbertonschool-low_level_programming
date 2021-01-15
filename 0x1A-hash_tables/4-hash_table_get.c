#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - get a value of a key
 * @ht: a hash table
 * @key: a key
 * Return: a node value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node == NULL)
		return (NULL);

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
