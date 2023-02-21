#include "main.h"

/**
 * print_sign - checks the sign of an integer
 * @n - the integer to be checked
 *
 * Return: -1 if negative, 1 if positive, 0 if 0
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
