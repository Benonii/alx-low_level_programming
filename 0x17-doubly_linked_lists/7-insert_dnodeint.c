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

	if (*h == NULL)
	{
		if (idx == 0)
		{
			*h = node;
			return (node);
		}
		else
		{
			free(node);
			return (NULL);
		}
	}

	if (idx == 0)
	{
		node->next = *h;
		(*h)->prev = node;
		*h = node;
		return (node);
	}

	current = *h;
	while (current != NULL)
	{
		if (i == idx)
		{
			node->next = current;
			node->prev = current->prev;
			current->prev->next = node;
			current->prev = node;

			return (node);
		}

		current = current->next;
		i++;
	}

	if (i == idx)
	{
		current = node;
		node->prev = (*h)->prev;
		(*h)->prev->next = node;
		return(node);
	}

	free(node);
	return (NULL);
}
