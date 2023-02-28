#include "main.h"

/**
 * _strcpy - copies string from source to detination
 * @src: source
 * @dest: destination
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest,  char *src)
{
	int i = 0;
	int count = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i++])
		count++;
	*dest[count + 1] = '0';

	return (dest);
}
