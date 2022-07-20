#include "main.h"
/**
 * find_squrt - finds the square root
 * @n: number
 * @root: Possible squareroot
 * Return: the squareroot
 */
int find_squrt(int n, int root)
{
	if ((root * root) == n)
		return (root);

	if (root == n / 2)
		return (-1);

	return (find_squrt(n, root++));
}

/**
 * _sqrt_recursion - prints the natural squareroot of n
 * @n: number
 * Return: The natural squareroot if it exists, -1 if it doesn't
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	
	if (n == 1)
		return (1);

	return (find_squrt(n, root));
}
