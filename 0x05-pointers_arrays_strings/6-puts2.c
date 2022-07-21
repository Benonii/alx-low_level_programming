#include "main.h"
/**
 * puts2 - prints every other string starting from the first one
 * @str: the string that we will go through
 */
void puts2(char *str)
{
	int index;
	int len = 0;

	while (str[index++])
		len++;
	for (index = 0; index < len; index++)
	{
		_putchar(str[index]);
		index += 2;
	}

	_putchar(10);
}
