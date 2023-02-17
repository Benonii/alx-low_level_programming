#include <stdio.h>

/**
 * main - The main function
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (k = 2; k < 10; k++)
			{
				if (j <= i || k <= j)
					continue;

				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');

				if (i == 7 && j == 8 && k == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
