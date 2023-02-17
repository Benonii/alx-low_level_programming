#include <stdio.h>

/**
 * main - The main function
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (j <= i)
				continue;

			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
