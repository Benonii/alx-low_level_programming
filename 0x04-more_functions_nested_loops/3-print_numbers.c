#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: none
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar((i % 10) + '0');
	_putchar(10);
}
