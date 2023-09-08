#include "hash_tables.h"

/**
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
		return ht->array[index]->value;
	return NULL;
}

