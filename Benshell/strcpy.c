#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination
 * @src: source
 *
 * Return: pointer to char(dest)
 */

char *_strcpy(char *dest, const char *src)
{
	char *safe = dest;

	while (*src)
	{
		*dest++ = *src++;
		*dest = 0;
	}
	return (safe);
}
