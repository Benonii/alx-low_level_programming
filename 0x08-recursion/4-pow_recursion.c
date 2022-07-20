#include "main.h"
/**
 * _pow_recursion - return x the power of y
 * @x: The base
 * @y: The exponent
 * Return: The power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x * 1);

	return (x * _pow_recursion(x, y - 1));
}
