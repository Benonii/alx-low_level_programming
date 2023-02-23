#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal using #
 * @size: size of the triangle
 *
 * Return: none
 */

void print_triangle(int size)
{
	int i, j , k, l;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			for (k = (size - 1); k >= 0; k--)
			{	
				_putchar(' ');
				
				for (l = 0; l < (size - k); l++)
					_putchar('#');
				
				_putchar(10);
			}
		}
	}
}
