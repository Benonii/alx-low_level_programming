#include "main.h"
/**
 * print_line - prints a line in the terminal
 * @n: number of times '_' is printed
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar(10);
	_putchar('_' * n);
	_putchar(10);
}
