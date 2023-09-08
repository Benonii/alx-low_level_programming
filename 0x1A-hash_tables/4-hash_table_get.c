#include "hash_tables.h"

/**
 * hash_table_get - gets the value assosicated with a given key
 * @ht: The hash table
 * @key: The key
 *
 * Return: The value if found, NULL if not
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
		return (ht->array[index]->value);
	return (NULL);
}
