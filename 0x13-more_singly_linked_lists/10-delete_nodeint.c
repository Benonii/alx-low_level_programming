#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a give index in a list
 * @head: points to the head of the list
 * @index: index
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, count;
	listint_t *temp, *ptr, *previous, *nextNode;

	ptr = *head;
	temp = *head;


	while (temp)
	{
		count++;
		temp = temp->next;
	}

	if (index > count)
		return (-1);

	for (i = 0; i <= index; i++)
	{
		if (i == index - 1)
			previous = ptr;
		if (i == index)
		{
			nextNode = ptr->next;
			previous->next = nextNode;
			free(ptr);
			break;
		}
		else
			ptr = ptr->next;
	}
	return (1);
}
