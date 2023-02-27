#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
        int i = 0;
        int count = 0;
        int j;

        while (s[i] != 0)
        {
                count++;
                i++;
        }

        for (i = 0; i < count; i++)
        {
                j = count - i;

                if ( s[j] == '\0')
                        continue;

                s[i]  = s[j];
        }
        for (i = 0; i <= count; i++)
        {
                if (i == count)
                        s[i] = '\0';

                putchar(s[i]);
        }
        putchar(10);
}

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	
	return (0);}
