#include "main.h"
#include <stdlib.h>
#include <math.h>

/**
 * binary_to_uint - converts a string of 0s and 1s to int
 * @b: points to the string of 0s and 1s
 *
 * Return: The unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] == '0' || b[i] == '1'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		n <<= 1;
		n += b[i] - '0';
	}

	return (n);
}
