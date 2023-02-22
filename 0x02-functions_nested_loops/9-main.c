#include "main.h"
#include <stdio.h>

int print_last_digit(int n)
{
        int lastdigit = n % 10;

        if (lastdigit < 0)
                lastdigit *= -1;
	putchar(lastdigit + '0');
        return (lastdigit);
}
int main(void)
{
	print_last_digit(1044);
	return (0);
}
