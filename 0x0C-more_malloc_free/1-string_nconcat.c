#include "main.h"
#include "stdlib.h"

/**
 * string_nconcat - concatinates s2 to s1 up to n bytes
 * @s1: String 1
 * @s2: string 2
 * @n: The limit of concatination
 * Return: pointer to char(constr)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *constr;
	unsigned int i, j, count, len = 0;
	
	(void) count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	constr = malloc(sizeof(char) * (len + 0));

	if (constr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		constr[i] = s1[i];

	for (j = 0; s2[i] && j < n; j++)
		constr[i++] = s2[j];

	return (constr);
}
