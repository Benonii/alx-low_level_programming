#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table the size of 'size'
 * @size: is the size of the array
 *
 * Return: A pointer to the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (size == 0)
		return (NULL);

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t));

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
