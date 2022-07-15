#include "main.h"
/**
 * swap_int - sawps the value of a and b
 * @a: variable 1
 * @b: variable 2
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
