#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 *
 *@size: size of the hash table array
 *
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t) * size);
	if (hash_table->array == NULL)
	{
		return (NULL);
	}
	return (hash_table);
}
