#include "main.h"

/**
 * get_bit - gets bit at index
 * @n: The integer
 * @index: index
 * Return: the bit at index
 */

int get_bit(unsgined long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	if ((n >> (index + 1)) & 1 == 1)
		return (1);
	if ((n >> (index + 1)) & 1 == 0)
		return (0);
}
