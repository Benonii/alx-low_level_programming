#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: none
 */
void rev_string(char *s)
{
	int i = 0;
	int count = 0;

	while (str[i] != 0)
	{
		count++;
		i++;
	}

	for (i = 0; i <= count; i++)
		_putchar (str[i]);
	_putchar(10);

	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);
	-putchar(10);
}
