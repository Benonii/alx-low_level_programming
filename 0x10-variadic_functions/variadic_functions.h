#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - takes the format and points to the function
 *		   depending on the data type
 * @symbol:The format
 * @print: pointer to the right funciton
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} print_it;

#endif
