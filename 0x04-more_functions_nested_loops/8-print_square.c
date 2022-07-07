#include "main.h"
/**
 * print_square - Prints a square
 * @size: Size of the square
 */
void print_square(int size)
{
	int length, width;

	if (size > 0)
	{

		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}

			if (length == size - 1)
				continue;
			_putchar(10);
		}
	}
	_putchar(10);
}
