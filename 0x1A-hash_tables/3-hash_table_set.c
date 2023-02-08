#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_set - add a element to a hash table
 * @ht: the hash table
 * @key: the key of the element
 * @value: the value of the element
 *
 * Return: one for success, zero for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	long int index;
	char *new_key, *new_value;

	if (strcmp(key, ""))
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);

	new_key = strdup(key);
	new_value = strdup(value);

	if (ht->array[index]->next != NULL)
	{
		hash_node_t *prev = ht->array[index];

		ht->array[index]->key = new_key;
		ht->array[index]->value = new_value;
		ht->array[index]->next = prev;
	}
	else
	{
		ht->array[index]->key = new_key;
		ht->array[index]->value = new_value;
		ht->array[index]->next = NULL;
	}

	return (1);
}
