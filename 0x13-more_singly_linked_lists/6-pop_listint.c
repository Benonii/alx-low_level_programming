#include "lists.h"

/**
 * pop_listint - removes the first node of a list but saves its value
 * @head: pointer to list
 * Return: The value of the removed node
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr, *temp;

	ptr = *head;

	if (ptr == NULL)
		return (0);

	n = ptr->n;
	temp = ptr->next;
	free(ptr);
	ptr = temp;

	return (n);
}
