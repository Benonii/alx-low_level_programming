#include "main.h"
#include <stdio.h>
#include <sys/types.h>

/**
 * print_binary - prints the binary represantation of an int
 * @n: The unsigned int
 * Return: None
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}
