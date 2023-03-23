#include <stdarg.h>

/**
 * sum_them_all - adds all the numbers passed in
 * @n: the amount of numbers passed
 * Return: The sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int num = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
