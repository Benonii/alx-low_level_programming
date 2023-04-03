#include "lists.h"

/**
 * listint_len - Counts the number of nodes in a list
 * @h: points to the nodes of the list
 * Return: The number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
