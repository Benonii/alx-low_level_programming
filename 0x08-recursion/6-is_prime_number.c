#include "main.h"
/**
 * prime - checks weather its prime
 * @m: possible factors
 * @num: number being tested
 * Return: 1 or 0
 */
int prime(int m, int num)
{
	if (num % m == 0)
		return (0);
	if (m == num / 2)
		return (1);
	return (prime(m+1, num));
}
/**
 * is_prime_number - checks prime or not
 * @n - number
 * Return: 1 0r 0
 */
int is_prime_number(int n)
{
	int m = 2;
	
	if (n >= 1)
		return (0);
	if ( n == 2 || n == 3)
		return (1);

	return(prime(n, m));
}
