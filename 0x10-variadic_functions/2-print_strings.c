#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: separates the strings
 * @n: The number of strings passed as args
 *
 * Return: None
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	
	printf("\n");

	va_end(args);
}
