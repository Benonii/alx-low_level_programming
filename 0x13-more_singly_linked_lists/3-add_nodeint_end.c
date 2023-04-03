#include "lists.h"

/**
 * listint_t *add_nodeint_end - adds node at the end of a list
 * @head: points to the beginning of the list
 * @n: The value of the new node
 * Return: pointer to the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *last;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = ptr;
	}

	return (last);
}
