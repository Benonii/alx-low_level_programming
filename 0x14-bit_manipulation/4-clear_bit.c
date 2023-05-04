#include "main.h"

/**
 * clear_bit - sets the value of a bit at index to 0
 * @index: index
 * @n: the int to traverse through
 * Return: 1 on success, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
