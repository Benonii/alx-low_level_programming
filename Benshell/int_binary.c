#include "printf.h"

/**
 * print_binary - converting an int to binary
 * @args: list of arguments
 *
 * Return: number of printed digits
 */

int print_binary(va_list args)
{
	unsigned int x = 0;
	int b = 0, m = 0;

	m = va_arg(args, int);
	x = m;

	if (m < 0)
	{
		_write('1');
		m= m * (-1);
		x = m;
		b += 1;
	}
	while (x > 0)
	{
		x /= 2;
		b++;
	}
	recursion_binary(m);
	return (b);
}

/**
	* recursion_binary - prints a binary
	* @a: the int
	*
	* Return: None
*/

void recursion_binary(int a)
{
	unsigned int t = 0;

	t = a;
	if (t / 2)
		recursion_binary(t / 2);
	_write(t % 2 + '0');
}
