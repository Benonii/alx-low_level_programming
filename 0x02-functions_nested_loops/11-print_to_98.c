#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from number n to 98
 * @n: number
 *
 * Return: none
 */

void print_to_98(int n)
{
	if (n < 99)
	{
		while (n < 99)
		{
			if (n == 98)
			{
				printf('\n');
				break;
			}
			else
			{
				printf("%d, ", n);
				n++;
		}
	}
	if (n > 98)
	{
		while (n > 97)
		{
			if (n == 98)
			{	printf('\n');
				break;
			}
			else
			{
				printf("%d, ", n);
				n--;
			}
		}
	}
}
