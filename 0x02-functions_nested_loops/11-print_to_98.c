#include "main.h"
/**
 * print_to_98 - Entry point
 *
 * @n: Starting point
 * Return: None(void)
 */

void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	putchar(10);
}
