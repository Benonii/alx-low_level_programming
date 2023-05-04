#include "main.h"

/**
 * flip_bits - calculates bits needed to be flipped
 * to get form one number to another
 * @n: Number to flip from
 * @m: Number to flip through
 * Return: The number of flips needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
