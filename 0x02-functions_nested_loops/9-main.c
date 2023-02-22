#include "main.h"
#include <stdio.h>

void test(void)
{
        int n, m, x;

        for (n = 0; n <= 9; n++)
        {
                for (m = 0; m <= 9; m++)
                {
			x = n * m;

			if (x < 10)
			{
				putchar((x % 10) + '0');
				putchar(',');
				
				if (m == 9)
				{	
					putchar(10);
					continue;
				}

				putchar(' ');
				putchar(' ');
			}
			else
			{
                        	putchar((x / 10) + '0');
                        	putchar((x % 10) + '0');
                                
				if (m == 9)
				{
					putchar(10);
					continue;
				}

				putchar(',');
                                putchar(' ');
			}
                }
        }
}

int main(void)
{
	test();
	return (0);
}
