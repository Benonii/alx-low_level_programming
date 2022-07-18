#include "main.h"
/**
 * _memcpy - copies bytes from src to dest
 * @src: address to be copied from
 * @dest: address to be copied to
 * @n: the number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
	destination[index] = source[index];

	return (dest);
}
