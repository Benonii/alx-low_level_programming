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
		if (i == n - 1)
		{
			str =  va_arg(args, char *);

			if (str == NULL)
				printf("(nil)");

			printf("%s\n", str);
		}
		str =  va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");

		printf("%s%s", str, separator);
	}
	va_end(args);
}
