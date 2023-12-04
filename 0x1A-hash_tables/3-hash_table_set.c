#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value.
 * @key: The key to be added or updated.
 * @value: The value associated with the key (duplicated).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *table;
	char *copy;
	unsigned int len, index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (len = index; ht->array[len]; len++)
	{
		if (strcmp(ht->array[len]->key, key) == 0)
		{
			free(ht->array[len]->value);
			ht->array[len]->value = copy;

			return (1);
		}
	}
	table = malloc(sizeof(hash_node_t));

	if (table == NULL)
	{
		free(table);
		return (0);
	}
	table->value = copy;
	table->next = ht->array[index];
	ht->array[index] = table;

	return (1);
}
