#include "main.h"
/**
 * puts_half - Prints the second half of a string
 * @str: The string
 */

void puts_half(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = len / 2; index < len; index++)
	{
		if (len % 2 != 0)
			_putchar(str[index + 1]);
		_putchar(str[index]);
	}
	_putchar(10);
}
