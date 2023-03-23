#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers separated by @separator
 * @separator: separates the numbers to be printed
 * @n: the amount of numbers to be printed
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			num = va_arg(args, int);
			printf("%d\n", num);
		}
		num = va_arg(args, int);
		printf("%d%s", num, separator);
	}
	va_end(args);
}
