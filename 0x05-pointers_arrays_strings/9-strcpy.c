#include "main.h"
/**
 * _strcpy - copies a string from src to dest
 * @dest: Destination
 * @src: source
 */
char *_strcpy(char *dest, char *src)
{
	int index, len = 0;

	while (src[index++])
		len++;

	for (index = 0; index < len; index++)
		dest[index] = src[index];

	destString = sourceString;
	
	return(dest);
}
