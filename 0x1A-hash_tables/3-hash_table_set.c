#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the node's key
 * @value: the node's vlaue
 *
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	unsigned long int index = 0;

	if (node == NULL)
		return (0);

	if (key == NULL)
		return (0);

	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(key) + 1);

	strcpy(node->key, key);
	strcpy(node->value, value);
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		ht->array[index] = node;

	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}
