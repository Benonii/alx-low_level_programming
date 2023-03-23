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
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
