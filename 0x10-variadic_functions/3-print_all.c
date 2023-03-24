#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list agrs);
void print_string(va_list args);

/**
 * print_char - prints char
 * @args: The argument to be printed
 * Return: None
 */

void print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	printf("%c", ch);
}

/**
 * print_int - prints ints
 * @args: The argument to be printed
 * Return: None
 */

void print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * print_float - prints floats
 * @args: The argument to be printed
 * Retunn: None
 */

void print_float(va_list args)
{
	float floater;

	floater = va_arg(args, double);
	printf("%f", floater);
}
/**
 * print_string - Prints a string
 * @args: The argument to be printed
 * Return: None
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");

	}

	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: The format of the arg to be printed
 * Return: None
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0, j = 0;

	print_it funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}
	printf("\n");

	va_end(args);
}
