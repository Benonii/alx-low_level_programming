#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in a dlistint_t list
 * @h: pointer to the beginning of the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
