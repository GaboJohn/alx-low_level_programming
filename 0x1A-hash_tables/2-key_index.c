#include "hash_tables.h"

/**
 * key_index - Get the index at which the key/value pair should be stored in the array.
 * @key: The key to be hashed.
 * @size: The size of the array of the hash table.
 *
 * Return: The calculated index for the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
