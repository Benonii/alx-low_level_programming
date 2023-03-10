#include "main.h"

/**
 * _islower - checks if a character is a lowercase alphabet
 * @c: the character being checked
 *
 * Return: 1 if lower case 0 if not
 */

int _islower(int c)
{
	if (c > 97 && c < 123)
		return (1);
	else
		return (0);
}
