#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
        int i = 0;
        int count = 0;

        while (str[i] != 0)
        {
                count++;
                i++;
        }

        for (i = 0; i <= count; i++)
                _putchar(str[i]);
        _putchar(10);
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
