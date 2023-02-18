#include <stdio.h>

/**
 * main - The main function
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 1; l < 10; l++)
				{
					if (l <= j || k <= i)
						continue;

					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar(' ');
					putchar((k % 10) + '0');
					putchar((l % 10) + '0');

					if (i == 9 && j == 8 && k == 9 && l == 9)
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
