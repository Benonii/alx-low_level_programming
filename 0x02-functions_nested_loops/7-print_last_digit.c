#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a given number
 * @n: digit to be stripped
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit *= -1;

	_putchar(lastdigit + '0');
	
	return (0);
}
