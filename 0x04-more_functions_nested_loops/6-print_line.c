#include "main.h"
/**
 * print_line - prints a line in the terminal
 * @n: number of times '_' is printed
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			_putchar('_');
		}
	}
	_putchar(10);
}
