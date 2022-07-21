#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: The array
 * @n: The number of elements to be printed
 */

void print_array(int *a, int n)
{
	int index = 0, len = 0;

	while (a[index++])
		len++;

	for (index = 0; index < n && index < len; index++)
	{
		printf("%d", a[index]);
		
		if (index == n - 1)
			continue;

		printf(", ");
	}
	_putchar(10);
}
