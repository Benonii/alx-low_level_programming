#include "search_algos.h"

/**
 * binary_2 - Performs a binary serach on a specific range of an array
 * @array: The array to be searched in
 * @value: The value we're looking for
 * @left: The lower end of the range to search in
 * @right: The upper end of the range to search in
 *
 * Return: The index of the value if found, -1 if not
 */

int binary_2(int *array, int value, size_t left, size_t right)
{
	size_t middle, i;

	if (array == NULL)
		return (-1);

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

/**
 * exponential_search - Perfomrs an exponential search on an array of ints
 * @array: The array to search in
 * @size: The size of @array
 * @value: The value we are looking for
 *
 * Return: The index of the value if found, -1 if not
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound, upper, lower;

	if (array == NULL)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	lower = bound / 2;
	upper  =  bound >= size ? size - 1 : bound - lower;

	return (binary_2(array, value, lower, upper));
}
