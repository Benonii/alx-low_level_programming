#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: ASCII value of letter
 * Return: 1 if success and 0 if fail
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

