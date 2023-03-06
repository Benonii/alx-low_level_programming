#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: pointer to the elements of the array
 * @size: size of the array(i * j)
 *
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int i, j, len, sum1, sun2;

	while (a[i++][j++])
		len++;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (i == j)
				sum1 += a[i][j];
			else
				continue;
		}
	}

	j = len - 1;

	for (i = 0; i < len; i++)
	{
		while (j >= 0)
		{
			sum2 += a[i][j];
			j--;
			break;
		}
	}
	printf("%d, %d", sum1, sum2);
	printf("\n");
}
