#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the char to be located
 *
 * Return: pointer to char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
