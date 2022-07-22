#include "main.h"
/**
 * _strcpy - copies a string from src to dest
 * @dest: Destination
 * @src: source
 */
char *_strcpy(char *dest, char *src)
{
	char src = sourceString, dest = destString;
	int index, len = 0;

	while (s[index++])
		len++;

	for (index = 0; index < len; index++)
		sourceString += str[index];
	destString = sourceString;
	
	return(dest);
}
