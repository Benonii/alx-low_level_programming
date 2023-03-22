#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a @name
 * @name: The name
 * @f: points to the function that will print the name
 * Return: None
 */

void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;

    f(name);
}
