#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 * starting with the first one, followed by a new line.
 *
 * @str: the string
 * Return: none
 */

void puts2(char *str)
{
	int i = 0;
	int count = 0;

		while (str[i] != 0)
	{
		count++;
		i++;
	}
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar(10);
}
