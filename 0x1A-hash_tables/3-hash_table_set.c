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
	char *my_key;
	char *my_value;
	long int index;

	if (strcmp(key, ""))
	{
		return (0);
	}

	my_key = malloc(sizeof(key));
	my_value = malloc(sizeof(value));

	strcpy(my_key, key);
	strcpy(my_value, value);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index]->next != NULL)
	{
		hash_node_t *prev = ht->array[index]->next;

		ht->array[index]->key = my_key;
		ht->array[index]->value = my_value;
		ht->array[index]->next = prev;
	}
	else
	{
		ht->array[index]->key = my_key;
		ht->array[index]->value = my_value;
		ht->array[index]->next = NULL;
	}

	free(my_key);
	free(my_value);

	return (1);
}
