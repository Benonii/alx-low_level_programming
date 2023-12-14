#include "search_algos.h"

/**
 * jump_list - Perfomrs a jump search on a singly linked list
 * @list: The list to search through
 * @size: The size of @list
 * @value: The value we're looking for
 *
 * Return: Pointer to the first node that contains value, or NULL if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, step, k;
	listint_t *current = list, *temp;

	if (list == NULL)
		return (NULL);

	step = sqrt(size);

	for (i = 0; i < size; i++)
	{
		if (current->n >= value)
			break;

		if (current->next == NULL)
		{
			printf("Value checked at index[%ld] = [%d]\n",
					current->index, current->n);
			break;
		}

		temp = current;
		k = 0;
		while (k < step)
		{
			if (current->next == NULL)
				break;
			current = current->next;
			k++;
		}
		printf("Value checked at index[%ld] = [%d]\n",
				current->index, current->n);
	}

	printf("Value found between indexes [%ld] = [%ld]\n",
			temp->index, current->index);
	while (temp->n != current->n)
	{
		if (temp != NULL)
		{
			printf("Value checked at index[%ld] = [%d]\n",
				temp->index, temp->n);
		}
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
