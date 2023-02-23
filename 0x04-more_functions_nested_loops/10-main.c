#include <stdio.h>

void print_triangle(int size)
{
        int i, j , k, l;

	for (k = 0; k < size - 1 ; k++)
                        
                             putchar(' ');

                               for (l = 0; l < size - k; l++)
                                        putchar('#');

                                putchar(10);
                        }
                
      
}

int main(void)
{
	print_triangle(10);
	return (0);
}
