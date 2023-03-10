#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string two
 * Return: 0 if they are equal, 1 if s1 is greater, -1 if s1 is less
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
