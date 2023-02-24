#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to be printed
 */

void print_number(int n)
{
	if (n < 0 && n >= -9)
	{
		_putchar('-');
		_putchar((n % 10) + '0');
	}
	else if (n < 0 && n < -9)
	{
		_putchar('-');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n > 0 && n <= 9)
	{
		_putchar((n % 10) + '0');
	}
	else if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
		_putchar(10);
}
