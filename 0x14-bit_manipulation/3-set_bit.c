#include "main.h"

/**
 * set_bit - sets bit at index to 1
 * @n: The unsigned int to traverse through
 * @index: index
 * Return: 1 if success, -1 if failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n >> index) == 0)
		~(n >> (index + 1));

	return (1);
}
