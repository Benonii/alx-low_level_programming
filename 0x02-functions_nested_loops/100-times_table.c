#include "main.h"

/**
 * print_times_table - prints a 9x9 time table
 * @n: the limit of the times table
 *
 * Return: none
 */

void print_times_table(int n)
{
	int i, m, p;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (m = 1; m <= n; m++)
		{
			_putchar(',');
			_putchar(' ');

			p = i * m;

			if (p <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar((p / 10) + '0');

			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
