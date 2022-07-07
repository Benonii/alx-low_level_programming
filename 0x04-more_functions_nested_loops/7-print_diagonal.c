#include "main.h"
/**
 * print_diagonal - prints a diagonal in the terminal
 * @n: number of times '_' is printed
 */
void print_diagonal(int n)
{
	int len, space; /* space defines how much space there should be before the '\\' */

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
	}
	_putchar(10);
}
