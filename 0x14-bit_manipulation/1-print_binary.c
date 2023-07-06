#include "main.h"

/**
 * print_binary - prints the binary version of an integer
 * @n: The unsigned integer
 * Return: None
 */

void print_binary(unsigned long int n)
{
	unsigned long int m = 1;

	do
	{
		if ((n & m) == 0)
			_putchar('0');
		if ((n & m) == m)
			_putchar('1');

		m  <<= 1;
	} while (m <= 1024);
}
