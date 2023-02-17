#include <stdio.h>

/**
 * main - The main function
 *
 * Return: 0
 */

int main(void)
{
	char b, B;

	for (b = 97; b < 123; b++)
		putchar(b);

	for (B = 65; B < 91; B++)
		putchar(B);

	putchar(10);
	return (0);
}
