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
	if (strcmp(key, ""))
	{
		return (0);
	}

	const char my_value = value;

	unsigned long int index = key_index(key, ht->size);
	hash_node_t *new_element = ht->array[index];

	if (new_element->next != NULL)
	{
		hash_node_t *prev = new_element->next;

		new_element->key = key;
		new_element->value = my_value;
		new_element->next = prev;
	}
	else
	{
		new_element->key = key;
		new_element->value = my_value;
		new_element->next = NULL;
	}
	return (1);
}
