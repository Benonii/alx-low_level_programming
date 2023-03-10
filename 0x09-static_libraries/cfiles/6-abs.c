#include "main.h"

/**
 * _abs - prints the absolute value of an int
 * @n:  the int to be checked
 *
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
