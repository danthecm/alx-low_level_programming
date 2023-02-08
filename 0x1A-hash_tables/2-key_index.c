#include "hash_tables.h"
/**
 * key_index - hash a key and return the index
 * @key: the key to hash
 * @size: the size of the hash table
 *
 * Return: the hash index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	unsigned long int index = hash % size;

	return (index);
}
