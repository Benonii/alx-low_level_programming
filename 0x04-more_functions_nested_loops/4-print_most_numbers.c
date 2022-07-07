#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 10 except 2 and 4
 *
 * Return: Void
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + '0');
	}
	_putchar(10);
}
