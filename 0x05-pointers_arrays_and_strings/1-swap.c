#include "main.h"

/**
 * swap_int - swaps the value of two int variables
 * @a: int 1
 * @b: int 2
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int n, m;

	n = *a;
	m = *b;
	*a = m;
	*b = n;
}
