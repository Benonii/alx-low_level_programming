#include "main.h"

/**
 * times_table - prints a 9x9 time table
 *
 * Return: none
 */

void times_table(void)
{
	int n, m, x;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			x = n * m;

			if (x < 10)
			{
				_putchar((x % 10) + '0');
				_putchar(',');

				if (m == 9)
				{
					_putchar(10);
					continue;
				}

				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');

				if (m == 9)
				{
					_putchar(10);
					continue;
				}

				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
