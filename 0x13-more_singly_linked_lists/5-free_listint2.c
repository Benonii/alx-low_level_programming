#include "lists.h"

/**
 * free_listint2 - frees a listint_t pointed to by head
 * @head: pointer to list
 * Return: None
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	ptr = *head;

	if (ptr == NULL)
		printf("Freed!");

	while (ptr)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	*head = NULL;
}
