#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of the prefix substring
 * @s: string
 * @accept: part of string that will be measures
 *
 * Return: int(number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
        unsigned int count = 0;
        int i;

        while (*s)
        {
                for (i = 0; accept[i]; i++)
                {
                        if (*s == accept[i])
                        {
                                count++;
                                break;
                        }

                        else if (accept[i + 1] == '\0')
                                return (count);
                }

                s++;
        }

        return (count);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
