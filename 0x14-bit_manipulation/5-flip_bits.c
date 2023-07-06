#include "main.h"

/**
 * flip_bits - Calculates how many flips need to be flipped to get
 *	       from one number to another
 * @n: from this unsigned int
 * @m: to this unsigned int
 * Return: The number of bits calculated
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int Xor, count;

	Xor = n ^ m;
	while (Xor != 0)
	{
		if (Xor & 1 == 1)
			count++;
		Xor >> 1;
	}
}
