#include "main.h"

/**
 * print_binary - prints the binary version of an integer
 * @n: The unsigned integer
 * Return: None
 */

void print_binary(unsigned long int n)
{
	while (n != 0)
	{
		if ((n & 1) == 1)
			_putchar('1');
		else
			_putchar('0');

		n >>= 1;
	}
}
