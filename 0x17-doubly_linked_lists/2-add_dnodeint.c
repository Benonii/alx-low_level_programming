#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to beginning of the list
 * @n: int to be inserted
 *
 * Return: address of the new element, or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head != NULL)
		(*head)->prev = node;
	*head = node;

	return (node);
}
