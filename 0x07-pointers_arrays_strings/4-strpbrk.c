#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: the set of bytes to be looked for
 *
 * Return: pointer to the the byte in s that matches one of the bytes in accept
 * returns NULL if none.
 */

char *_strpbrk(char *s, char *accept)
{
	int len1, len2;
	int **p;

	for (unsigned int i; i < len1; i++)
	{
		for (unsigned int j; j < len2; j++)
		{
			if (accept[j] == size[i])
			{
				p = &(s[i]);
				break;
			}
		}
	}

	return (p);
}
