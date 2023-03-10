#include "main.h"

/**
 * _memcpy -  copies memory area from source to destination
 * @dest: destination
 * @src: Source
 * @n: amount(number of bytes) to be copied
 *
 * Return: pointer to char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
