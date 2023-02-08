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
		hash_node_t *prev = malloc(sizeof(hash_node_t));

		hash_node_t *new_head = malloc(sizeof(hash_node_t));

		prev = ht->array[index];

		new_head->key = new_key;
		new_head->value = new_value;
		new_head->next = prev;

		ht->array[index] = new_head;
	}
	else
	{
		hash_node_t *new_head = malloc(sizeof(hash_node_t));

		new_head->key = new_key;
		new_head->value = new_value;
		new_head->next = NULL;

		ht->array[index] = new_head;
	}

	return (1);
}
