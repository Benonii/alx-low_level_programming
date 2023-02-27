#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array
 * @n: number of array elements to be printed
 * @a: I assume a pointer to the first element of the array
 *
 * Return: none
 */

void print_array(int n, int *a)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}

	printf("\n");
}
