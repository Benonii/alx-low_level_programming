#include "main.h"

/**
 * check_if_prime - actually checks if its prime
 * @num: number
 * @div: possible divisors
 *
 * Return: 1 if prime 0 if not
 */

int check_if_prime(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (check_if_prime(num, div + 1));
}

/**
 * is_prime_number - returns the result of previous function
 * @n: Nuber to be checked
 *
 * Return: check_if_prime
 *
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	return (check_if_prime(n, div));
}
