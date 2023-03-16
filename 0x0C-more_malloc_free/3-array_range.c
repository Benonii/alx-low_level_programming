#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array that is arranged in ascending order
 * @min: The smallest
 * @max: The largest
 * Return: pointer to int
 */

int *array_range(int min, int max)
{
	int i = 0, j, *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max + 1 - min));
	
	if (ptr == NULL)
		return (NULL);
	
	for (j = min; j < max + 1; j++)
		ptr[i++] = j;

	return(ptr);
}
