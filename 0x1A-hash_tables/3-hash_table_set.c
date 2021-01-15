#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>

/**
 * ht_pair - associate a node to an array index
 * @key: key of the node
 * @value: value of the node
 * Return: a node
 */
hash_node_t *ht_pair(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(node));
	node->key = malloc(strlen(key + 1));
	strcpy(node->key, key);
	node->value = malloc(strlen(value + 1));
	strcpy(node->value, value);
	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - insert value in a hash table
 * @ht: a hash table
 * @key: a str to hash
 * @value: the value of the key
 * Return: 1 if it's okay 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	(void)value;
	unsigned long int index;

	if (strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = ht_pair(key, value);
		return (1);
	}
	return (1);
}
