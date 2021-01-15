#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create an array(hash table)
 * @size: size of the array
 * Return: an array
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array;

	array = NULL;
	array = malloc(sizeof(unsigned long int) * size);

 	if (array == NULL)
 	{
 		return (NULL);
 	}
 
	return (array);
}
