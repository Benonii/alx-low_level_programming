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

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j >= size; j--)
			_putchar(10);

		for (j = 0; j < i; j++)
			_putchar('#');

		if (i == size)
			continue;

		_putchar(10);
	}
}
