#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>

/**
 * add_node_head - add node to the index head
 * @ht: a hashtable
 * @value: a value
 * @key: a key
 * Return: a hashtable
**/
int add_node_head(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *prev;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];
	prev = malloc(sizeof(prev));
	if (prev == NULL)
		return (0);
	prev->key = malloc(strlen(key + 1));
	if (prev->key == NULL)
		return (0);
	strcpy(prev->key, key);
	prev->value = malloc(strlen(value + 1));
	if (prev->value == NULL)
		return (0);
	strcpy(prev->value, value);
	prev->next = node;
	ht->array[index] = prev;

	return (1);
}
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
	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key + 1));
	if (node->key == NULL)
		return (NULL);
	strcpy(node->key, key);
	node->value = malloc(strlen(value + 1));
	if (node->value == NULL)
		return (NULL);
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
	unsigned long int index;
	hash_node_t *node;


	if (strlen(key) == 0 || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = ht_pair(key, value);
		if (ht->array[index] == NULL)
			return (0);
		return (1);
	}
	if (ht->array[index] != NULL)
	{
		node = ht->array[index];

		while (node)
		{
			if (strcmp(node->key, key) == 0)
			{
				free(node->value);
				node->value = malloc(strlen(value) + 1);
				if (node->value == NULL)
					return (0);
				strcpy(node->value, value);
				return (1);
			}
			node = node->next;
		}
		if (add_node_head(ht, key, value) == 1)
			return (1);
	}
	return (0);
}
