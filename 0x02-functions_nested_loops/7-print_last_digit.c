#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @n: Any integer
 * Return: Varies
 */
int print_last_digit(int n)
{
	int m;

	for(m = 0; m < 2; m ++)
	{
		if (n >=0)
			return (n % 10);
		else
			return (-n % 10);
	}
}

