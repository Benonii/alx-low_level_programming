#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to char
 * @b: byte to fill up memory
 * @n: amount of bytes to fill up
 *
 * Return: pointer to char(s)
 */

char *memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
