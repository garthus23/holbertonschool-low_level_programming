#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create an array(hash table)
 * @size: size of the array
 * Return: an array
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *array;

	array = malloc(sizeof(hash_table_t));

	if (array == NULL)
	{
		return (NULL);
	}

	array->array = malloc(sizeof(hash_node_t *) * size);

	for (; i < size; i++)
	{
		array->array[i] = NULL;
	}

	return (array);
}
