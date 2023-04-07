#include "main.h"

/**
 * flip_bits - counts the number of flips necesarry to equate two ints
 * @n: int 1
 * @m: int 2
 * Return: The counts
 */

unsigned int flip_bits(unsigned long int n, long int m)
{
	unsigned int count = 0;
	int diffs = n ^ m;

	while (diffs >= 1)
	{
		count += (diffs & 1);
		diffs >>= 1;
	}

	return (count);
}
