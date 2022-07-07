#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 10 times
 *
 * Return: Void
 */
void more_numbers(void)
{
	int num;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0')
			_putchar(num + '0');
		}
	}
	_putchar(10);
}
