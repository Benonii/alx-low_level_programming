#include "lists.h"

/**
 * reverse_listint - reverses the order of a list
 * @head: Points to the beginning of the list
 * Return: Pointer to the last(now first) node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *ptr, *nxt;

	ptr = *head;

	if (ptr == NULL)
		return (NULL);
	while (ptr)
	{
		nxt = ptr->next;
		ptr->next = previous;
		previous = ptr;
		ptr = nxt;
	}

	*head = previous;
	return (ptr);
}
