#include "main.h"

/**
 * print_square - prints a square in the terminal using #
 * @size: The length of the square
 *
 * Retrun: none
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar(10);
	}
}