#include "main.h"
/**
 * print_rev - Prints a given string in reverse
 * @s: the pointer to the string
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;
	for (index = len; index >= 0; index--)
		_putchar(s[index]);
	_putchar(10);
}
