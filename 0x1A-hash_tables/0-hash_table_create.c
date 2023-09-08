#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table the size of 'size'
 * @size: is the size of the array
 *
 * Return: A pointer to the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(size * sizeof(hash_table_t));
	unsigned long int i;

	if (size == 0)
		return NULL;


	table->size = size;
	table->array = calloc(table->size, sizeof(hash_table_t));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return table;
}
