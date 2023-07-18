#include "printf.h"

/**
 * print_pointer - prints address arguments
 * @args: passed arguments
 * Return: Number of chars printed
 */

int print_pointer(va_list args)
{
	char *ptr = NULL, c = '\0';
	int n = 0;
	unsigned long int i = 0;

	ptr = va_arg(args, char *);

	for (i = 0; i < strlen(ptr); i++)
	{
		c = va_arg(args, int);
		write(1, &c, 1);
	}
	n = i;

	return (n);
}
