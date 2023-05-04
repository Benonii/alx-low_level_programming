#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: The converted number or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i;

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
