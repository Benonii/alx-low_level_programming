#include "search_algos.h"

/**
 * recursive_call - handles the recursive part of @advanced_binary
 * @array: The array to be searched
 * @value: The value to look for
 * @left: The lower bound
 * @right: The upper bound
 *
 * Return: The index of the found value or -1 if not found
 */

int recursive_call(int *array, int value, int left, int right)
{
	int i, middle;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");

	middle = (left + right) / 2;

	if (array[middle] == value)
	{
		if (array[middle - 1] == value)
			right = middle;
		else
			return (middle);
	}

	else if (array[middle] < value)
		left = middle + 1;
	else
		right = middle;

	return (recursive_call(array, value, left, right));
}

/**
 * advanced_binary - Performs a binary search on an array of ints
 * @array: The array to be searched
 * @size: The size of @array
 * @value: The value we're looking for
 *
 * Return: The left most index of @value found, or -1 if none is found
 */

int advanced_binary(int *array, size_t size, int value)
{
	int left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	return (recursive_call(array, value, left, right));
}
