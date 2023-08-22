#include "main.h"

/**
 * _puts - prints a string to stdout, followed by a new line.
 * @str: string to be printed
 *
 * Return: nobe
 */

void _puts(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != 0)
	{
		count++;
		i++;
	}

	for (i = 0; i < count; i++)
		_putchar(str[i]);
	_putchar(10);
}
