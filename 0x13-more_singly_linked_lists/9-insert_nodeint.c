#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index of a list
 * @head: points to the head of the list
 * @idx: Index
 * @n: The value of the node to be inserted
 * Return: Pointer to the inserted node, NULL if fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i, count;
    listint_t *temp, *ptr, *new, *previous;

    new = malloc(sizeof(listint_t));

    ptr = *head;
    temp = *head;

    if (ptr == NULL)
        return (NULL);

    new->n = n;

    while(temp)
    {
        count++;
        temp = temp->next;
    }

    if (idx > count)
        return (NULL);

    for (i = 0; i <= idx + 1; i++)
    {
        if (i == idx - 1)
        {
            previous = ptr;
        }
        else if (i == idx)
            new->next = ptr->next;
        else
            ptr = ptr->next;
    }
    previous->next = new;

    return (new);
}
