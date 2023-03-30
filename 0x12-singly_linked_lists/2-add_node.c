#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the beginning of  the linked list
 * @head: pointer to the beginnig of the list (I think)
 * @str: The string to be duplicated into the new node
 * Return: A pointer to the new node
 */

list_t *add_node(list_t **head, const *str)
{
	char *temp;
	int len;
	list_t new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	temp = strdup(str);

	if (temp == NULL)
		free(new);
	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	return (new);
}
