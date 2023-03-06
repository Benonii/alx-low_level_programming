#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the char to be located
 *
 * Return: pointer to char
 */

char *_strchr(char *s, char c)
{
        int i;

        for (i = 0; s[i] >= '\0'; i++)
        {
                if (s[i] == c)
                        return (s + i);
        }
	return ('\0');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
