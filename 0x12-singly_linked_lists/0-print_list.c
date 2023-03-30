#include "lists.h"
/**
 * print_list = print all the nodes of a linked lists
 * @h: points to the elements of the linked list
 * Return: The number of nodes(elements)
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return(i);
}
