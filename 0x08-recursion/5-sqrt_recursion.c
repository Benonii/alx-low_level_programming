#include "main.h"
/**
 * _sqrt_recursion - prints the natural squareroot of n
 * @n - number
 * Return: The natural squareroot if it exists, -1 if it doesn't
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (root * root = n)
		return (root);

	return (_sqrt_recursion(n, root + 1));
}
