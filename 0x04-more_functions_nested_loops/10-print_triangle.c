#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal using #
 * @size: size of the triangle
 *
 * Return: none
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(10);

			for (j = 0; j < i; j++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar(10);
		}
	}
	_putchar(10);
}
