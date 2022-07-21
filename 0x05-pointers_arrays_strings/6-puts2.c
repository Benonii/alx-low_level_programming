#include "main.h"
/**
 * puts2 - prints every other string starting from the first one
 * @str: the string that we will go through
 */
void puts2(char *str)
{
	int index = 0;
	int len;

	while (str[index++])
		len++;

	while (str[index])
	{
		if (index < len)
		{
			_putchar(str[index]);
			index += 2;
		}
		else
			break;
	}
	_putchar(10);
}
