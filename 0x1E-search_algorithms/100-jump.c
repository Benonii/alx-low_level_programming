#include "search_algos.h"

/**
 * jump_search - Performs a jump search on an array of integers
 * @array: The array to be searched
 * @size: The size of @array
 * @value: The number we're looking for
 *
 * Return: the index of @value or -1 if @value is not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, j, step;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	for (i = 0; i < size; i = i + step)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] >= value)
			break;
	}

	printf("Value found between indexes [%d] and [%ld]\n",
		array[i - step], i);

	for (j = i - step; j <= i; j++)
	{
		if (j < size)
			printf("Value checked array [%ld] = [%d]\n",
				j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
