#include "main.h"

/**
 * print_line - prints a line in the terminal
 * @n: the length of the line
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar(10);
}
