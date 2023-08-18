#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: pointer to the beggining of the list
 * @index: The index
 *
 * Return: 1 if success -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL, *next = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	while (current != NULL)
	{
		if (i == index)
		{
			next = current->next;
			if (current->prev != NULL)
				current->prev->next = current->next;
			else
				*head = current->next;
			if (next != NULL)
				next->prev = current->prev;

			free(current);
			return (1);
		}

		current = current->next;
		i++;
	}

	return (1);
}
