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


	if (count % 2 == 0)

		n = count / 2;

	else
		n = ((count - 1) / 2);

	for (i = n; i < count; i++)
		_putchar(str[i]);

	_putchar(10);
}
