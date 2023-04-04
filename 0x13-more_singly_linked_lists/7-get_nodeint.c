#include "lists.h"

/**
 * get_nodeint_at_index - Returns a node at an index
 * @head: points to the lists
 * @index: The index
 * Return: Pointer to the node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, count;
	listint_t *ptr;

	ptr = head;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	if (index > count)
		return (NULL);

	for (i = 0; i <= index; i++)
	{
		if (i == index)
			break;
		head = head->next;
	}
	return (head);
}
