#include "search_algos.h"

/**
 * binary_search - Performs a binary search on an array of integers
 * @array: The array to be searched
 * @size: The size of @array
 * @value: The value we're looking for
 *
 * Return: The index of the value if found, -1 if not
*/

int binary_search(int *array, size_t size, int value)
{
	int left, right, middle, i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		middle = (left + right) / 2;
		if (array[middle] > value)
			right = middle - 1;

		else if (array[middle] < value)
			left = middle + 1;

		else
			return (middle);
	}
	return (-1);
}
