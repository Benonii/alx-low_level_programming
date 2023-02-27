#include "main.h"

/**
 * puts_half - prints half of the string.
 * @str: the string
 *
 * Return: none
 */

void puts_half(char *str)
{
	int i = 0;
	int count = 0;
	int n;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	n = ((count - 1) / 2);

	if (count % 2 == 0)
	{
		for (i = (count / 2); i < count; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = n; i < count; i++)
			_putchar(str[i];
	}
	_putchar(10);
}
