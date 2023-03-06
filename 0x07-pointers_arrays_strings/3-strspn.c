#include "main.h"

/**
 * _strspn - gets the length of the prefix substring
 * @s: string
 * @accept: part of string that will be measures
 *
 * Return: int(number of bytes in the initial segment
 */

char *_strspn(char *s, char *accept)
{
	int len1, len2;

	while (s[i++])
		len1;
	while (accept[i++])
		len2++;

	for (unsigned int i; i < len1; i++)
	{
		for (unsigned int j; j < len2; j++)
		{
			if (accept[j] == s[i])
				count++;
			else
			continue;
		}
	}
	return (count);
}
