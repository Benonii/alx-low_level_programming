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
	int i, count;
	char **b;

	while (s[i++])
		count++;

	for (i = 0; i < count; i++)
	{
		if (s[i] == c)
			b = &(s[i]);
		else
			continue;
	}
	return (b);
}
