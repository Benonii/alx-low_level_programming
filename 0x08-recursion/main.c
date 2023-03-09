#include "main.h"
#include <stdio.h>

/**
 * find_sqrt - actually finds the square root
 * @num: the number we get from _sqrt_recursion
 * @root: Possible natural square root
 *
 * Return: root or -1
 */

int find_sqrt(int num, int root)
{
        if (root * root == num)
                return (root);

        if ( root == num / 2)
                return (-1);
        else
                return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number
 *
 * Return: the square root of the number
 */

int _sqrt_recursion(int n)
{       
        int root = 0;
        
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

        return (find_sqrt(n, root));
}       

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
