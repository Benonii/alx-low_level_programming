#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} print_it;

#endif
