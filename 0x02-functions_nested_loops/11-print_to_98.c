#include "main.h"

/**
 * print_to_98 - prints from number n to 98
 * @n: number
 *
 * Return: none
 */

void print_to_98(int n)
{
	for (; n < 99; n++)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		if (n == 98)
			break;
		_putchar(',');
		_putchar(' ');
	}
	_putchar(10);
}
