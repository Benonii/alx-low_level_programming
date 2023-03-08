#include "main.h"

/**
 * _pow_recursion - returns x to the power of y
 * @x: The base
 * @y: The exponent
 *
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	else
		return (x * pow_recursion(x, y - 1));
}
