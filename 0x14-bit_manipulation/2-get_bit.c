#include "main.h"

/**
 * get_bit - gets bit at index of an int
 * @n: The unsigned int
 * @index: The index
 * Return: The bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int m;
    if (index > sizeof(unsigned long int) * 8)
        return (-1);

    m = 1 << index;

    if ((n & m) != 0)
        return (1);

    return (0);
}
