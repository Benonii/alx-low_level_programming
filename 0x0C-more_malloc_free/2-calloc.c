#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array an initializes to 0
 * @nmenb: Multiply size by this amount
 * @size: Size
 */

void *_calloc(unsigned int nmenb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmenb  == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmenb);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmenb); i++)
		arr[i] = 0;

	return((void*) arr);
}
