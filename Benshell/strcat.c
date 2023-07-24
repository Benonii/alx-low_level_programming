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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	if (!src)
		return (NULL);

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
