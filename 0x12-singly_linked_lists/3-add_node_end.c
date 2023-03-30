#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node to the end of a list
 * @head: pointer to the head of the list
 * @str: str to be duplicated to the new node
 * Return: A pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *temp;
	int len;
	list_t *new, *lastNode;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	temp = strdup(str);

	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = temp;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = new;
	}

	return (*head);
}

