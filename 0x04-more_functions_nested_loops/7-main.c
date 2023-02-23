#include <stdio.h>

void print_diagonal(int n)
{
        int i, j;

        for (i = 0; i < n; i ++)
        {
                for (j = 0; j <= i; j++)
			putchar(' ');
                putchar(92);
	putchar(10);
        }

}

int main(void)
{
	print_diagonal(10);
	return (0);
}
