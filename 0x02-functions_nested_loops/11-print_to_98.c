#include "main.h"

/**
 * print_to_98 - prints from number n to 98
 * @n: number
 *
 * Return: none
 */

void print_to_98(int n)
{
	if (n < 99)
	{
		while (n <99)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');

			if (n == 98)
			{
				_putchar(10);
				break;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				n++;
			}
		}
	}
	if (n > 98)
	{
		while (n > 97)
                {
                        _putchar((n / 10) + '0');
                        _putchar((n % 10) + '0');

                        if (n == 98)
			{
				_putchar(10);
				break;
			}
			else
			{
                        	_putchar(',');
                        	_putchar(' ');
                        	n--;
			}
		}
	}
}
