#include "main.h"

/**
 * set_bit - sets a  bit that was 0 to 1
 * @n: the integer to go through
 * index: The index
 * Return: 1 success, -1 fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
    if (index > (sizeof(unsigned long int) * 8))
        return (-1);

    if ((*n & (1 << index)) == 0)
        *n ^= (1 << index);
    return (1);
}
