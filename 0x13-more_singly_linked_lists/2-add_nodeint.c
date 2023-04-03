#include "lists.h"

/**
 * add_nodeint - adds a node at the begenning of a list
 * @head: Points to the first node
 * n: The value to be placed in the new node
 * Return: A pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *ptr, *temp;

    ptr = malloc(sizeof(listint_t));

    if (ptr == NULL)
    {
        free(ptr);
        return(NULL);
    }
    temp = *head;

    ptr->n = n;
    ptr->next = temp;

    *head = ptr;

    return (*head);
}
