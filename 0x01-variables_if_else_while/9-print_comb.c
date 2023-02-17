#include <stdio.h>

/**
 * main - The main function
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			continue;
	}
	putchar(10);
	return (0);
}
