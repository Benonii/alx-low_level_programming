#include <stdio.h>

/**
 * main - The main function
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char b;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (b = 97; b < 103; b++)
		putchar(b);

	putchar(10);
	return (0);
}
