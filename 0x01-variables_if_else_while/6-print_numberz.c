#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Probably)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	return (0);
}
