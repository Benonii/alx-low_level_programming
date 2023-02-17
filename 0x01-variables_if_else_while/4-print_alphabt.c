#include <stdio.h>

/**
 * main - The main function
 *
 * Return: 0
 */

int main(void)
{
	char b;

	for (b = 97; b < 123; b++)
	{
		if (b == 101 || b == 113)
			continue;

		putchar(b);
	}
	putchar(10);
	return (0);
}
