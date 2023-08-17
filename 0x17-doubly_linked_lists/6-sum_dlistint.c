#include "lists.h"

/**
 * sum_dlistint - adds all the nodes
 * @head: Pointer to beggining of the list
 *
 * Return: Sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
