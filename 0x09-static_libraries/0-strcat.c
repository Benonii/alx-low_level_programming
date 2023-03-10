#include "main.h"

/**
 * _strcat - concatinate src to dest
 * @dest: initial string
 * @src: string to be concatinated
 *
 * Return: a pointer to char(dest)
 */

char *_strcat(char *dest, const char *src)
{
	int i, count;

	while (dest[i++])
		count++;

	for (i = 0; src[i]; i++)
		dest[count++] = src[i];

	return (dest);
}
