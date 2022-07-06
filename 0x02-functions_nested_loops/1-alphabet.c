#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: None(void)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar(10);
}
