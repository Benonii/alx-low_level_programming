#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initalizes it witha specific char.
 *
 * @size: The size of the array
 * @c: The initalizer
 *
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
