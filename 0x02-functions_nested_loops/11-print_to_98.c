#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from number n to 98
 * @n: number
 *
 * Return: none
 */

void print_to_98(int n)
{

	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}

}
