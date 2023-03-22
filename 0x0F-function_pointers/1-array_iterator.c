#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iteretor - executes a function given as a parameter on each
 *                  element of array
 * @array: The array to be iterated through
 * @size: The size of the array
 * @action: the pointer of function
 * Return: None
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (array == NULL || action == NULL)
        return;
    for (i = 0; i < size; i++)
    {
        action(array[i]);
    }
}
