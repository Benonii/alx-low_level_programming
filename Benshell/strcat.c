#include "main.h"

/**
 * _strcat - concatinates src on dest
 * @dest: initial string
 * @src: string to be concatinated
 *
 * Return: a pointer to char(dest)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, count = 0;

	while (dest[i++])
		count++;

	for (i = 0; src[i]; i++)
		dest[count++] = src[i];
	return (dest);
}
