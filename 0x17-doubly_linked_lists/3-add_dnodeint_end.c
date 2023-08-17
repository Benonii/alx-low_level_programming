#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of a dlistint_t list
 * @head: points to the beginning of the list
 * @n: The value of the node to be inserted
 *
 * Return: Address of the added node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *current = *head;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = node;
		node->prev = current;
	}

	return (node);
}
