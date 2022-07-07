#include "main.h"

/**
 * print_numbers - prints numbers froom 1 to 10
 * 
 * Return: Void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i >=9; i++)
	{
		_putchar(i + '0');
	}
	_putchar(10);
}
