#include "main.h"

/**
 * times_table - prints a 9x9 time table
 *
 * Return: none
 */

void times_table(void)
{
	int r, c, x;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			x = r * c;
			if (x < 10)
				_putchar(x + '0');
			if (x >= 10)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}

			if (r == 9)
				_putchar(10);

			else
				_putchar(',');
				_putchar(' ');

			_putchar(',');
			_putchar(' ');
		}
		_putchar(10);
	}
	_putchar(10);
}
