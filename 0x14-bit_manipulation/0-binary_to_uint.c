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
	unsigned int index, n = 0;

	if (b == NULL)
		return (0);

	for (index = 0; b[index] == '0' || b[index] == '1'; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			continue;
		n <<= 1;
		n += b[index] - '0';
	}

	return (n);
}
