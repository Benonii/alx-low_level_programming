#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: the set of bytes to be looked for
 *
 * Return: pointer to the the byte in s that matches one of the bytes in accept
 * returns NULL if none.
 */

char *_strpbrk(char *s, char *accept)
{
        int i;

        while (*s)
        {
                for (i = 0; accept[i]; i++)
                {
                        if (*s == accept[i])
                                return (s);

                }
        	
		s++;
	}

        return (NULL);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}
