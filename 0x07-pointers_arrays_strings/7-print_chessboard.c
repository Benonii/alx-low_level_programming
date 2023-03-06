#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the elements of the array)
 *
 * Return: none
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < a - 1; i++)
	{
		for (j = 0; j < 7; j++)
			_putchar(a[i][j]);

	}
	_putchar(10);
}
