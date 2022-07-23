#include "main.h"
/**
 * _strcpy - copies a string from src to dest
 * @dest: Destination
 * @src: source
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index++])
		dest[index] = src[index];

	return(dest);
}
