#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinated two strings and placed them in a
 * dynamically allocated memory.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: ptr to allocated memory
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;
	char *ptr;

	if (s1 && s2 == NULL)
		return (NULL);

	while (s1[i++])
		len1++;
	while (s2[j++])
		len2++;

	ptr = malloc((sizeof(char) * len1) + (sizeof(char) * len2));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = len1, j = 0; i && j <= len2; i++, j++)
		ptr[i] = s2[j];

	return (ptr);
}