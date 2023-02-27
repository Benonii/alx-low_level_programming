#include "main.h"

/**
 * _strcpy - copies string from source to detination
 * @src: source
 * @dest: destination
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
