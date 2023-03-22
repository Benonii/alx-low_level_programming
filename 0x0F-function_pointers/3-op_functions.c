#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * op_add  - adds two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: The sum of and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a from b
 * @a: number 1
 * @b: nuber 2
 *
 * Return: the difference of a nd b(a -b)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a to b
 * @a: dividend
 * @b: divisor
 *
 * Return: The quotent
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the reminder from dividing a to b
 * @a: dividend
 * @b: divisor
 *
 * Return: The reminder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
