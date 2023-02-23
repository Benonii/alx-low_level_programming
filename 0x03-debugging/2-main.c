#include <stdio.h>


int largest_number(int a, int b, int c)
{
        int largest;

        if ((a > b && a > c) || (a == b && a > c)  || (a == c && a > b))
        {
                largest = a;
        }
        else if ((b > a && b > c) || (b == a && b > c) || (b == c && b > a))
        {
                largest = b;
        }
        else if ((c > a && c > b) || (c == a && c > b) || (c == b && c > a))
        {
                largest = c;
        }
        return (largest);
}

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
