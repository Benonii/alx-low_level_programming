#include "search_algos.h"

/**
 * interpolation_search - Performs an interpolation search on an array of ints
 * @array: The array to be searched
 * @size: The size of @array
 * @value: The value we're looking for
 *
 * Return: The index of the found value, -1 if index not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	int right, left, pos;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	while (value >= array[left] && value <= array[right] && left <= right)
	{
		pos = left + (((double)(right - left) /
			(array[right] - array[left])) * (value - array[left]));

		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			right = pos - 1;
		else
			left = pos + 1;
	}
	return (-1);
}
