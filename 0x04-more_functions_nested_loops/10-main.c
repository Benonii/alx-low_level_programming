#include <stdio.h>

void print_triangle(int size)
{
        int i, j;
	for (i = size - 1; i >= 0; i--)
	{
		putchar(' ');
	for (j = 0; j < size - i; j++)
		putchar('#');
		
	putchar(10);
	}
}

int main(void)
{
	print_triangle(10);
	return (0);
}
