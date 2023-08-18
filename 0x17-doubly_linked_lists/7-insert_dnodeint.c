#include "lists.h"

/**
 * insert_dnode_int_at_index - inserts a new node at a given position
 * @h: pointer to beggining of the list
 * @idx: index to insert at
 * @n: number to be instered
 *
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx,
		int n)
{
	dlistint_t *node = NULL, *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	current = *h;
	while (current != NULL)
	{
		if (i == idx)
		{
			node->next = current;
			node->prev = current->prev;
			current->prev->next = node;
		}
		current = current->next;
		i++;
	}

	return (node);
}
