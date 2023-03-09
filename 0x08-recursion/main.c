#include "main.h"
#include <stdio.h>

/**
 * check_if_prime - actually checks if its prime
 * @num: number
 * @div: possible divisors
 *
 * Return: 1 if prime 0 if not
 */

int check_if_prime(int num, int div)
{
        if (div == num / 2)
                return (1);

        if (num % div == 0)
                return (0);

        return (check_if_prime(num, div + 1));

}

/**
 * int is_prime_number - returns the result of previous function
 * @n: Nuber to be checked
 *
 * Return: check_if_prime
 * .
 */

int is_prime_number(int n)
{
	int div = 2;

        if (n <= 1)
                return (0);

        return (check_if_prime(n, div));
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
