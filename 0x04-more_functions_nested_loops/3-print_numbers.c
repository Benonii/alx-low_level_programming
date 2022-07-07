#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 10
 * 
 * Return: Void
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar(10);
}
