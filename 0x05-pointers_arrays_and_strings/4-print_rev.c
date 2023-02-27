#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to be reversed
 *
 * Return: none
 */
void print_rev(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != 0)
	{
		count++;
		i++;
	}

	for (i = count - 1; i <= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
