#include "lists.h"

/**
 * print_listint - prints a linked list of integers.
 * @h: pointer to the nodes
 * Return: The number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
