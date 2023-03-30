#include "lists.h"

/**
 * free_list - frees a list pointed to by head
 * @head: pointer to beginning of list
 * Return: Nome
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
