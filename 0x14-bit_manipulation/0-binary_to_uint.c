#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned integer
 * @b: a pointer to a string of 0s and 1s
 * Return: The converted number or 0 if there is one or more non-binary
 *	   chars in b, or b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i;

	if (b == null)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
	}
	return (n);
}
