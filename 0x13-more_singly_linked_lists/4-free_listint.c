#include "lists.h"

/**
 * free_listint - frees a listint_t pointed to by head
 * @head: pointer to list
 * Return: None
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
