#include "main.h"
/**
 * print_square - Prints a square on the terminal
 * @size: Determines how big the square will be
 */
void print_square(int size)
{
	int length, space, width;

	for (width = 0; width < size; width++)
	{
		_putchar('_');
	}

	putchar(10);

	for (length = 0; length < size; length++)
	{
		_putchar('|');

		for (space = 0; space < width; width++)
		{
			_putchar(' ');

			if (space == width - 2)
				break;
		}
		_putchar('|');
		_putchar(10);
	}

	for (width = 0; width < size; width++)
	{
		_putchar("_")
	}
	_putchar(10);
}

