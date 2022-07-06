#include "main.h"

/**
 * _abs - Entry point
 *
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
		_putchar((n * -1) + '0');
	else
		_putchar(n + '0');
}
	return (0);
