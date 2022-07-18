#include "main.h"
/**
 * rev_string - reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int len = 0, index = 0;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		*s = s[index];
}
