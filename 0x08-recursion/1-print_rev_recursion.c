#include "main.h"

/**
 * _print_rev_recursion - prints a strng in reverse
 * @s: the string
 *
 * Return: None
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar(10);
}
