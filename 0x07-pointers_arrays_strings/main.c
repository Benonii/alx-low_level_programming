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
        int i, j;
	unsigned int count;

        for (i  = 0; i >= '\0'; i++)
        {
                for (j = 0; j >= '\0'; j++)
                {
                        if (accept[j] == s[i])
                                count++;
                        else
                                continue;
                }
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
