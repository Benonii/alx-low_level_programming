#include "main.h"
/**
 * print_rev - Prints a given string in reverse
 * @s: the pointer to the string
 */

void print_rev(char *s)
{
	int len = 0, index = 0;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar(10);
}
