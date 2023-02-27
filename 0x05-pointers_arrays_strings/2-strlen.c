#include "main.h"

/**
 * _strlen -  counts the length of a string
 * @s: the string
 *
 * Return: the length of the string (count)
 */

int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (*s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
