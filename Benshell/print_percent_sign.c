#include "printf.h"

/**
 * print_percent - prints a percent signe when it's
 *		   specified after anouther %
 * @args: Empty variable
 *
 * Return: The numebr of bytes(1);
 */

int print_percent(va_list args)
{
	char percent_sign;
	int n;

	percent_sign = '%';
	(void) args;

	n = write(1, &percent_sign, 1);

	return (n);
}
