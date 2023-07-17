#include "main.h"

/**
 * strcpy - copies a string from src to dest
 * @dest: destination
 * @src: source
 *
 * Retur: pointer to char(dest)
 */

char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i++])
		dest[i] = src[i];

	return (dest);
}
