#include "main.h"

/**
 * _strncat - concatinates a string up to n
 * @dest: to be concatinated here
 * @src: to concatinate from here
 * @n: the limit of chars to be copied
 *
 * Return: pointer to char(dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, count;

	while (dest[i++])
		count++;

	for (i = 0; s[i] && i < n; i++)
		dest[count++] = s[i];

	return (dest);
}

