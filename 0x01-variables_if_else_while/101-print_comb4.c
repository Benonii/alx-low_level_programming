#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
