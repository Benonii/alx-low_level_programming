#include "main.h"

/**
 * clear_bit - sets bit at given index to 0
 * @n: unsigned integer
 * @index: index
 * Return: 1 if it worked, -1 if it fails
 */

int clear_bit(unsigned long int *n, unsinged int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	if ((n >> (index + 1) & 1 == 1))
		~(n >> (index + 1));
	return (1);
}
