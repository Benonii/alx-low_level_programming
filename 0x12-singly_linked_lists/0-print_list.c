#include "lists.h"
/**
 * print_list = print all the nodes of a linked lists
 * @h: points to the elements of the linked list
 * Return: The number of nodes(elements)
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	h = malloc(sizeof(list_t));

	if (h == NULL)
		return (-1);

	while (h != NULL)
	{
		printf("[%d] %s", i,  h-> str);

		if (h->str == NULL)
			printf("[%d] (nil)", i);
		i++;
		h = h->next;
	}
	return(i);
}
