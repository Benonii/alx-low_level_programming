#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks if a mem segment can be alloc'd.
 * Then allocates said mem
 * @b: How much mem to allocate
 * Return: Pointer to void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(3);

	else
		return (ptr);
}
