#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated memore that contains
 * a duplicated version of str
 *
 * @str: string to be dupliacted
 *
 * Return: pointer to allocated memory area
 */

char *_strdup(char *str)
{
	int i = 0, count = 0;
	char *ptr2;

	if (str == NULL)
		return (NULL);

	while (str[i++])
		count++;

	ptr2 = malloc((sizeof(char) * count) + 1);

	if (ptr2 == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		ptr2[i] = str[i];

	return (ptr2);
}
