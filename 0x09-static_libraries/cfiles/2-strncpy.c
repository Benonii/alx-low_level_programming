#include "main.h"

/**
 * _strncpy - copies a string from src to dest upto n characters
 * @dest: destination
 * @src: source
 * @n: n
 *
 * Return: pointer to char(dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, count;

	while (src[i++] && i < n)
		dest[i] = src[i];

	return (dest);
}
