#include "main.h"

void print_alphabet_x10(void)
{
	int rep;
	char letter;

	for (rep = 0; rep < 10; rep++)
	{
		for(letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar(10);
	}
}
