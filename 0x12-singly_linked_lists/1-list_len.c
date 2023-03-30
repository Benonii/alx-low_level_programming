#include "lists.h"
#include <string.h>

/**
 * list_len - returns the number of nodes in a linked list
 * @h: pointer to the nodes of the linked list
 * Return: The number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
