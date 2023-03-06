#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: the string
 * @needle: the substring:
 *
 * Return: pointer to the beginnign of the located substring
 * (ptr2needle)
 */
char *_strstr(char *haystack, char *needle)
{
	int len1, len2, count;
	int *ptr2needlle;

	for (unsigned int i; i < len1; i++)
	{
		for (unsigned int j; j < len2; j++)
		{
			if (needle[j] != haystack[j])
				continue;

			else
				**ptr2needle = s[i];
		}
	}
	return (ptr2needle);
}
