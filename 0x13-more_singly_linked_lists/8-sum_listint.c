#include "lists.h"

/**
 * sum_listint - adds the values of the modes in a lists
 * @head: Points to the list
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
    int sum = 0;

    if (head == NULL)
        return (0);

    while (head)
    {
        sum += head->n;
        head = head->next;
    }
    return (sum);
}
