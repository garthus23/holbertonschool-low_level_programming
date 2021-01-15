#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - insert value in a hash table
 * @ht: a hash table
 * @key: a str to hash
 * @value: the value of the key
 * Return: 1 if it's okay 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
	{
		node = malloc(sizeof(node));
		node->key = malloc(strlen(key + 1));
		node->value = malloc(strlen(value + 1));
	}

	strcpy(node->key, key);
	strcpy(node->value, value);

	node->next = NULL;

	return (1);
}
