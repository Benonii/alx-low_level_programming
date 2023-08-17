#include "lists.h"

/**
 * free_dlistint - frees a dlistint list.
 * @head: Pointerto beginnig of the list
 *
 * Return: None
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
