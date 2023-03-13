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

	if (s1 == NULL)
		s1 = "";

	 if (s2 == NULL)
		 s2 = "";

	while (s1[i++])
		len1++;

	while (s2[j++])
		len2++;

	ptr = malloc((sizeof(char) * len1) + (sizeof(char) * len2) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (i = 0; s2[i]; i++)
		ptr[i] = s2[j];

	return (ptr);}
