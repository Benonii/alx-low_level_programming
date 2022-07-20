#include "main.h"
/**
 * find_squrt - finds the square root
 * @num: number
 * @root: Possible squareroot
 * Return: the squareroot
 */
int find_squrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_squrt(num, root + 1));
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
