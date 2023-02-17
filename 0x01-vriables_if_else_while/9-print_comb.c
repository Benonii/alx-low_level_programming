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
		if (i == 9)
			putchar((i % 10) + '0');
		else
		{
			putchar((i % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
