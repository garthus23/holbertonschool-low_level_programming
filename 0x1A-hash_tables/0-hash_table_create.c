#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create an array(hash table)
 * @size: size of the array
 * Return: an array
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t *node;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->array = malloc(sizeof(node) * size);
	ht->size = size;
/*
 *	for (; i < size; i++)
 *	{
 *		ht->array[i] = NULL;
 *	}
*/
	return (ht);
}
