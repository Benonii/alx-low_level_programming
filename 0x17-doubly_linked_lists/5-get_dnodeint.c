#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node of a dlistint_t list.
 * @head: Pointer to the begginnig of the list.
 * @index: index of node.
 *
 * Return: node at index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head, *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (i == index)
			node = current;
		i++;
	}

	return (node);
}
