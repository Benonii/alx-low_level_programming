#include <stdio.h>

int _isdigit(int c)
{
        if (c > 47 && c < 59)
                return (1);
        else
                return (0);
}

int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
