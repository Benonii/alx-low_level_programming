#include "search_algos.h"

/**
 * linear_search - performs a linear search on an array of integers
 * @array: The array to be searched
 * @size: The size of the array
 * @value: The value we're looking for
 *
 * Return: the index of the found int, or -1 if not found(or not successful)
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
