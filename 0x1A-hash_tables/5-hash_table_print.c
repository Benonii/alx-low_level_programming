#include "hash_tables.h"

/**
 * hash_table_print - prints the given hash table
 * @ht: The hash table
 *
 * Return: None
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 1;
	hash_node_t *current = NULL;

	if (ht == NULL)
		return;


	printf("{");


	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (!flag)
				printf(", ");

			printf("\'%s\': \'%s\'", current->key, current->value);
			flag = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
