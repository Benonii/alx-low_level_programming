#include "lsits.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: pointer to the beggining of the list
 * @index: The index
 *
 * Return: 1 if success -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, insigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	current = *head;
	while (current != NULL)
	{
		if (i == idx)
		{
			next = current->next;
			current->prev->next = next;
			next->prev = current->prev;
		}
		current = current->next;
		i++;
	}
	return (1);
}
